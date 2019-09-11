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
 * This file was generated by pbtools.
 */

#include <limits.h>
#include "bytes.h"

#if CHAR_BIT != 8
#    error "Number of bits in a char must be 8."
#endif

void bytes_message_init(
    struct bytes_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct bytes_message_t *next_p);

void bytes_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct bytes_message_t *self_p);

void bytes_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bytes_message_t *self_p);

void bytes_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct bytes_message_repeated_t *repeated_p);

void bytes_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct bytes_message_repeated_t *repeated_p);

void bytes_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bytes_message_repeated_t *repeated_p);

void bytes_message_init(
    struct bytes_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct bytes_message_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    pbtools_bytes_init(&self_p->value);
}

void bytes_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct bytes_message_t *self_p)
{
    pbtools_encoder_write_bytes(encoder_p, 1, &self_p->value);
}

void bytes_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bytes_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            pbtools_decoder_read_bytes(decoder_p, wire_type, &self_p->value);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void bytes_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct bytes_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)bytes_message_encode_inner);
}

void bytes_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct bytes_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct bytes_message_t),
        (pbtools_message_init_t)bytes_message_init,
        (pbtools_message_decode_inner_t)bytes_message_decode_inner);
}

void bytes_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bytes_message_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct bytes_message_t *
bytes_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct bytes_message_t),
                (pbtools_message_init_t)bytes_message_init));
}

int bytes_message_encode(
    struct bytes_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)bytes_message_encode_inner));
}

int bytes_message_decode(
    struct bytes_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)bytes_message_decode_inner));
}
