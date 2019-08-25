import re
import time

from .version import __version__


PRIMITIVE_TYPES = [
    'int32',
    'int64',
    'sint32',
    'sint64',
    'uint32',
    'uint64',
    'fixed32',
    'fixed64',
    'sfixed32',
    'sfixed64',
    'float',
    'double',
    'bool',
    'string',
    'bytes'
]

HEADER_FMT = '''\
/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by pbtools version {version} {date}.
 */

#ifndef {include_guard}
#define {include_guard}

#include <stdint.h>
#include <stdbool.h>

#define {namespace_upper}_BAD_WIRE_TYPE                                   1
#define {namespace_upper}_OUT_OF_DATA                                     2
#define {namespace_upper}_OUT_OF_MEMORY                                   3
#define {namespace_upper}_ENCODE_BUFFER_FULL                              4

struct {namespace}_heap_t {{
    char *buf_p;
    int size;
    int pos;
}};

{structs}
{declarations}
#endif
'''

SOURCE_FMT = '''\
/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by pbtools version {version} {date}.
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "{header}"

struct encoder_t {{
    uint8_t *buf_p;
    int size;
    int pos;
}};

struct decoder_t {{
    const uint8_t *buf_p;
    int size;
    int pos;
    struct {namespace}_heap_t *heap_p;
}};

static uint8_t tag(int field_number, int wire_type)
{{
    return ((field_number << 3) | wire_type);
}}

static struct {namespace}_heap_t *heap_new(void *buf_p, size_t size)
{{
    struct {namespace}_heap_t *heap_p;

    if (size >= sizeof(*heap_p)) {{
        heap_p = (struct {namespace}_heap_t *)buf_p;
        heap_p->buf_p = buf_p;
        heap_p->size = size;
        heap_p->pos = sizeof(*heap_p);
    }} else {{
        heap_p = NULL;
    }}

    return (heap_p);
}}

static void *heap_alloc(struct {namespace}_heap_t *self_p, size_t size)
{{
    void *buf_p;
    int left;

    left = (self_p->size - self_p->pos);

    if (size <= left) {{
        buf_p = &self_p->buf_p[self_p->pos];
        self_p->pos += size;
    }} else {{
        buf_p = NULL;
    }}

    return (buf_p);
}}

static void encoder_init(struct encoder_t *self_p,
                         uint8_t *buf_p,
                         size_t size)
{{
    self_p->buf_p = buf_p;
    self_p->size = size;
    self_p->pos = (size - 1);
}}

static int encoder_get_result(struct encoder_t *self_p)
{{
    int length;

    if (self_p->pos >= 0) {{
        length = (self_p->size - self_p->pos - 1);
        memmove(self_p->buf_p,
                &self_p->buf_p[self_p->pos + 1],
                length);
    }} else {{
        length = self_p->pos;
    }}

    return (length);
}}

{encoder_helpers}
static void decoder_init(struct decoder_t *self_p,
                         const uint8_t *buf_p,
                         size_t size,
                         struct {namespace}_heap_t *heap_p)
{{
    self_p->buf_p = buf_p;
    self_p->size = size;
    self_p->pos = 0;
    self_p->heap_p = heap_p;
}}

static int decoder_get_result(struct decoder_t *self_p)
{{
    int res;

    if (self_p->pos == self_p->size) {{
        res = self_p->pos;
    }} else {{
        res = -1;
    }}

    return (res);
}}

{decoder_helpers}
{helpers}\
{definitions}\
'''

ENCODER_PUT = '''\
static void encoder_put(struct encoder_t *self_p,
                        uint8_t value)
{{
    if (self_p->pos < 0) {{
        fprintf(stderr, "encoder_put: %d\\n", self_p->pos);
        exit(1);
    }}

    self_p->buf_p[self_p->pos] = value;
    self_p->pos--;
}}
'''

ENCODER_WRITE = '''\
static void encoder_write(struct encoder_t *self_p,
                          uint8_t *buf_p,
                          int size)
{{
    int i;

    for (i = size - 1; i >= 0; i--) {{
        encoder_put(self_p, buf_p[i]);
    }}
}}
'''

ENCODER_WRITE_VARINT = '''\
static void encoder_write_varint(struct encoder_t *self_p,
                                 int field_number,
                                 uint64_t value)
{{
    uint8_t buf[11];
    int pos;

    if (value == 0) {{
        return;
    }}

    pos = 0;
    buf[pos++] = tag(field_number, 0);

    while (value > 0) {{
        buf[pos++] = (value | 0x80);
        value >>= 7;
    }}

    buf[pos - 1] &= 0x7f;
    encoder_write(self_p, &buf[0], pos);
}}
'''

ENCODER_WRITE_INT32 = '''\
static void encoder_write_int32(struct encoder_t *self_p,
                                int field_number,
                                int32_t value)
{{
    encoder_write_varint(self_p, field_number, (uint64_t)(int64_t)value);
}}
'''

ENCODER_WRITE_INT64 = '''\
static void encoder_write_int64(struct encoder_t *self_p,
                                int field_number,
                                int64_t value)
{{
    encoder_write_varint(self_p, field_number, (uint64_t)value);
}}
'''

ENCODER_WRITE_SINT32 = '''\
static void encoder_write_sint32(struct encoder_t *self_p,
                                 int field_number,
                                 int32_t value)
{{
    if (value < 0) {{
        encoder_write_varint(self_p, field_number, ~((uint64_t)value << 1));
    }} else {{
        encoder_write_varint(self_p, field_number, (uint64_t)value << 1);
    }}
}}
'''

ENCODER_WRITE_SINT64 = '''\
static void encoder_write_sint64(struct encoder_t *self_p,
                                 int field_number,
                                 int64_t value)
{{
    if (value < 0) {{
        encoder_write_varint(self_p, field_number, ~((uint64_t)value << 1));
    }} else {{
        encoder_write_varint(self_p, field_number, (uint64_t)value << 1);
    }}
}}
'''

ENCODER_WRITE_UINT32 = '''\
static void encoder_write_uint32(struct encoder_t *self_p,
                                 int field_number,
                                 uint32_t value)
{{
    encoder_write_varint(self_p, field_number, (uint64_t)value);
}}
'''

ENCODER_WRITE_UINT64 = '''\
static void encoder_write_uint64(struct encoder_t *self_p,
                                 int field_number,
                                 uint64_t value)
{{
    encoder_write_varint(self_p, field_number, value);
}}
'''

DECODER_ABORT = '''\
static void decoder_abort(struct decoder_t *self_p,
                          int error)
{{
    if (self_p->size >= 0) {{
        self_p->size = -error;
        self_p->pos = -error;
    }}
}}
'''

DECODER_AVAILABLE = '''\
static bool decoder_available(struct decoder_t *self_p)
{{
    return (self_p->pos < self_p->size);
}}
'''

DECODER_GET = '''\
static uint8_t decoder_get(struct decoder_t *self_p)
{{
    uint8_t value;

    if (decoder_available(self_p)) {{
        value = self_p->buf_p[self_p->pos];
        self_p->pos++;
    }} else {{
        decoder_abort(self_p, {namespace_upper}_OUT_OF_DATA);
        value = 0;
    }}

    return (value);
}}
'''

DECODER_READ_VARINT = '''\
static uint64_t decoder_read_varint(struct decoder_t *self_p,
                                    int wire_type)
{{
    uint64_t value;
    uint8_t byte;
    int offset;

    if (wire_type != 0) {{
        decoder_abort(self_p, {namespace_upper}_BAD_WIRE_TYPE);

        return (0);
    }}

    value = 0;
    offset = 0;

    do {{
        byte = decoder_get(self_p);
        value |= (((uint64_t)byte & 0x7f) << offset);
        offset += 7;
    }} while (byte & 0x80);

    return (value);
}}
'''

DECODER_READ_TAG = '''\
static int decoder_read_tag(struct decoder_t *self_p,
                            int *wire_type_p)
{{
    uint32_t value;

    value = decoder_read_varint(self_p, 0);
    *wire_type_p = (value & 0x7);

    return (value >> 3);
}}
'''

DECODER_READ_INT32 = '''\
static int32_t decoder_read_int32(struct decoder_t *self_p,
                                  int wire_type)
{{
    return (decoder_read_varint(self_p, wire_type));
}}
'''

DECODER_READ_INT64 = '''\
static int64_t decoder_read_int64(struct decoder_t *self_p,
                                  int wire_type)
{{
    return (decoder_read_varint(self_p, wire_type));
}}
'''

DECODER_READ_SINT32 = '''\
static int32_t decoder_read_sint32(struct decoder_t *self_p,
                                   int wire_type)
{{
   uint64_t value;

   if (wire_type != 0) {{
       return (0);
   }}

   value = decoder_read_varint(self_p, 0);

   if (value & 0x1) {{
       value >>= 1;
       value = ~value;
   }} else {{
       value >>= 1;
   }}

   return (value);
}}
'''

DECODER_READ_SINT64 = '''\
static int64_t decoder_read_sint64(struct decoder_t *self_p,
                                   int wire_type)
{{
    uint64_t value;

    value = decoder_read_varint(self_p, wire_type);

    if (value & 0x1) {{
        value >>= 1;
        value = ~value;
    }} else {{
        value >>= 1;
    }}

    return (value);
}}
'''

DECODER_READ_UINT32 = '''\
static uint32_t decoder_read_uint32(struct decoder_t *self_p,
                                    int wire_type)
{{
    return (decoder_read_varint(self_p, wire_type));
}}
'''

DECODER_READ_UINT64 = '''\
static uint64_t decoder_read_uint64(struct decoder_t *self_p,
                                    int wire_type)
{{
    return (decoder_read_varint(self_p, wire_type));
}}
'''

MESSAGE_STRUCT_FMT = '''\
/**
 * Message {proto_name} in package {package}.
 */
struct {namespace}_{name}_t {{
    struct {namespace}_heap_t *heap_p;
{members}
}};
'''

MESSAGE_DECLARATION_FMT = '''\
/**
 * Create a new message {proto_name} in given workspace.
 *
 * @param[in] workspace_p Message workspace.
 * @param[in] size Workspace size.
 *
 * @return Initialized address book, or NULL on failure.
 */
struct {namespace}_{name}_t *{namespace}_{name}_new(
    void *workspace_p,
    size_t size);

/**
 * Encode message {proto_name} defined in package {package}.
 *
 * @param[in] self_p Message to encode.
 * @param[out] encoded_p Buffer to encode the message into.
 * @param[in] size Encoded buffer size.
 *
 * @return Encoded data length or negative error code.
 */
int {namespace}_{name}_encode(
    struct {namespace}_{name}_t *self_p,
    uint8_t *encoded_p,
    size_t size);

/**
 * Decode message {proto_name} defined in package {package}.
 *
 * @param[in,out] self_p Initialized message to decode into.
 * @param[in] encoded_p Buffer to decode.
 * @param[in] size Size of the encoded message.
 *
 * @return Number of bytes decoded or negative error code.
 */
int {namespace}_{name}_decode(
    struct {namespace}_{name}_t *self_p,
    const uint8_t *encoded_p,
    size_t size);
'''

MESSAGE_INNER_FMT = '''\
static void {namespace}_{name}_encode_inner(
    struct {namespace}_{name}_t *self_p,
    struct encoder_t *encoder_p)
{{
{encode_body}\
}}

static void {namespace}_{name}_decode_inner(
    struct {namespace}_{name}_t *self_p,
    struct decoder_t *decoder_p)
{{
    int wire_type;

    while (decoder_available(decoder_p)) {{
        switch (decoder_read_tag(decoder_p, &wire_type)) {{

{decode_body}
        default:
            break;
        }}
    }}
}}
'''

ENCODE_INNER_MEMBER_FMT = '''\
    encoder_write_{type}(encoder_p, 1, self_p->{name});
'''

DECODE_INNER_MEMBER_FMT = '''\
        case {field_number}:
            self_p->value = decoder_read_{type}(decoder_p, wire_type);
            break;
'''

MESSAGE_DEFINITION_FMT = '''\
struct {namespace}_{name}_t *{namespace}_{name}_new(
    void *workspace_p,
    size_t size)
{{
    struct {namespace}_{name}_t *self_p;
    struct {namespace}_heap_t *heap_p;

    heap_p = heap_new(workspace_p, size);

    if (heap_p == NULL) {{
        return (NULL);
    }}

    self_p = heap_alloc(heap_p, sizeof(*self_p));

    if (self_p != NULL) {{
        self_p->heap_p = heap_p;
        self_p->value = 0;
    }}

    return (self_p);
}}

int {namespace}_{name}_encode(
    struct {namespace}_{name}_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{{
    struct encoder_t encoder;

    encoder_init(&encoder, encoded_p, size);
    {namespace}_{name}_encode_inner(self_p, &encoder);

    return (encoder_get_result(&encoder));
}}

int {namespace}_{name}_decode(
    struct {namespace}_{name}_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{{
    struct decoder_t decoder;

    decoder_init(&decoder, encoded_p, size, self_p->heap_p);
    {namespace}_{name}_decode_inner(self_p, &decoder);

    return (decoder_get_result(&decoder));
}}
'''


def canonical(value):
    """Replace anything but 'a-z', 'A-Z' and '0-9' with '_'.

    """

    return re.sub(r'[^a-zA-Z0-9]', '_', value)


def camel_to_snake_case(value):
    value = re.sub(r'(.)([A-Z][a-z]+)', r'\1_\2', value)
    value = re.sub(r'(_+)', '_', value)
    value = re.sub(r'([a-z0-9])([A-Z])', r'\1_\2', value).lower()
    value = canonical(value)

    return value


def _generate_member_fmt(type, name):
    if type in ['int32', 'int64', 'uint32', 'uint64']:
        return f'    {type}_t {name};'
    elif type in ['sint32', 'sint64']:
        return f'    {type[1:]}_t {name};'
    elif type in ['fixed32', 'fixed64']:
        return f'    uint{type[5:]}_t {name};'
    elif type in ['sfixed32', 'sfixed64']:
        return f'    int{type[6:]}_t {name};'
    elif type in ['float', 'double', 'bool']:
        return f'    {type} {name};'
    elif type == 'string':
        return f'    char *{name}_p;'
    elif type == 'bytes':
        return '\n'.join(['    struct {',
                          '        uint8_t *buf_p;',
                          '        size_t size;',
                          f'    }} {name};'])
    else:
        return f'    {camel_to_snake_case(type)}_t {name};'


def _generate_members(message):
    members = []

    for field in message.fields:
        members.append(_generate_member_fmt(field.type, field.name))

    if not members:
        members = [
            '    uint8_t dummy;'
        ]

    return members


def generate_structs(namespace, parsed):
    structs = []

    for message in parsed.messages:
        members = _generate_members(message)
        structs.append(
            MESSAGE_STRUCT_FMT.format(namespace=namespace,
                                      package=parsed.package,
                                      proto_name=message.name,
                                      name=camel_to_snake_case(message.name),
                                      members='\n'.join(members)))

    return '\n'.join(structs)


def generate_declarations(namespace, parsed):
    declarations = []

    for message in parsed.messages:
        declarations.append(
            MESSAGE_DECLARATION_FMT.format(namespace=namespace,
                                           package=parsed.package,
                                           proto_name=message.name,
                                           name=camel_to_snake_case(message.name)))

    return '\n'.join(declarations)


def generate_message_encode_body(message):
    members = []

    for field in message.fields:
        if field.type in PRIMITIVE_TYPES:
            members.append(
                ENCODE_INNER_MEMBER_FMT.format(type=field.type,
                                               name=field.name))

    return '\n'.join(members)

def generate_message_decode_body(message):
    members = []

    for field in message.fields:
        if field.type in PRIMITIVE_TYPES:
            members.append(
                DECODE_INNER_MEMBER_FMT.format(field_number=field.tag,
                                               type=field.type))

    return '\n'.join(members)


def generate_definitions(namespace, parsed):
    definitions = []

    for message in parsed.messages:
        encode_body = generate_message_encode_body(message)
        decode_body = generate_message_decode_body(message)
        definitions.append(
            MESSAGE_INNER_FMT.format(namespace=namespace,
                                     name=camel_to_snake_case(message.name),
                                     encode_body=encode_body,
                                     decode_body=decode_body))
        definitions.append(
            MESSAGE_DEFINITION_FMT.format(namespace=namespace,
                                          package=parsed.package,
                                          proto_name=message.name,
                                          name=camel_to_snake_case(message.name)))

    return '\n'.join(definitions)


def generate_encoder_helpers(definitions, namespace_upper):
    helpers = []

    functions = [
        ('encoder_write_uint64(', ENCODER_WRITE_UINT64),
        ('encoder_write_uint32(', ENCODER_WRITE_UINT32),
        ('encoder_write_sint64(', ENCODER_WRITE_SINT64),
        ('encoder_write_sint32(', ENCODER_WRITE_SINT32),
        ('encoder_write_int64(', ENCODER_WRITE_INT64),
        ('encoder_write_int32(', ENCODER_WRITE_INT32),
        ('encoder_write_varint(', ENCODER_WRITE_VARINT),
        ('encoder_write(', ENCODER_WRITE),
        ('encoder_put(', ENCODER_PUT)
    ]

    for pattern, definition in functions:
        is_in_helpers = any([pattern in helper for helper in helpers])

        if pattern in definitions or is_in_helpers:
            helpers.insert(0, definition)

    return '\n'.join(helpers).format(namespace_upper=namespace_upper)


def generate_decode_helpers(definitions, namespace_upper):
    helpers = []

    functions = [
        ('decoder_read_uint64(', DECODER_READ_UINT64),
        ('decoder_read_uint32(', DECODER_READ_UINT32),
        ('decoder_read_sint64(', DECODER_READ_SINT64),
        ('decoder_read_sint32(', DECODER_READ_SINT32),
        ('decoder_read_int64(', DECODER_READ_INT64),
        ('decoder_read_int32(', DECODER_READ_INT32),
        ('decoder_read_tag(', DECODER_READ_TAG),
        ('decoder_read_varint(', DECODER_READ_VARINT),
        ('decoder_get(', DECODER_GET),
        ('decoder_available(', DECODER_AVAILABLE),
        ('decoder_abort(', DECODER_ABORT)
    ]

    for pattern, definition in functions:
        is_in_helpers = any([pattern in helper for helper in helpers])

        if pattern in definitions or is_in_helpers:
            helpers.insert(0, definition)

    return '\n'.join(helpers).format(namespace_upper=namespace_upper)


def generate_helpers(definitions, namespace_upper):
    encoder_helpers = generate_encoder_helpers(definitions, namespace_upper)
    decoder_helpers = generate_decode_helpers(definitions, namespace_upper)

    return encoder_helpers, decoder_helpers


def generate(namespace, parsed, header_name):
    """Generate C source code from given parsed proto-file.

    """

    date = time.ctime()
    namespace = camel_to_snake_case(namespace)
    namespace_upper = namespace.upper()
    include_guard = '{}_H'.format(namespace_upper)

    structs = generate_structs(namespace, parsed)
    declarations = generate_declarations(namespace, parsed)
    definitions = generate_definitions(namespace, parsed)
    encoder_helpers, decoder_helpers = generate_helpers(definitions,
                                                        namespace_upper)
    helpers = ''

    header = HEADER_FMT.format(version=__version__,
                               date=date,
                               namespace=namespace,
                               namespace_upper=namespace.upper(),
                               include_guard=include_guard,
                               structs=structs,
                               declarations=declarations)

    source = SOURCE_FMT.format(version=__version__,
                               date=date,
                               namespace=namespace,
                               namespace_upper=namespace.upper(),
                               header=header_name,
                               encoder_helpers=encoder_helpers,
                               decoder_helpers=decoder_helpers,
                               helpers=helpers,
                               definitions=definitions)

    return header, source
