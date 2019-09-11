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
#include "message.h"

#if CHAR_BIT != 8
#    error "Number of bits in a char must be 8."
#endif

void message_foo_init(
    struct message_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_foo_t *next_p);

void message_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_foo_t *self_p);

void message_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_foo_t *self_p);

void message_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_foo_repeated_t *repeated_p);

void message_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_foo_repeated_t *repeated_p);

void message_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_foo_repeated_t *repeated_p);

void message_bar_init(
    struct message_bar_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_bar_t *next_p);

void message_bar_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_bar_t *self_p);

void message_bar_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_bar_t *self_p);

void message_bar_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_bar_repeated_t *repeated_p);

void message_bar_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_bar_repeated_t *repeated_p);

void message_bar_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_bar_repeated_t *repeated_p);

void message_message_init(
    struct message_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_t *next_p);

void message_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_t *self_p);

void message_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_t *self_p);

void message_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_repeated_t *repeated_p);

void message_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_repeated_t *repeated_p);

void message_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_repeated_t *repeated_p);

void message_message_fie_init(
    struct message_message_fie_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_fie_t *next_p);

void message_message_fie_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_fie_t *self_p);

void message_message_fie_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_t *self_p);

void message_message_fie_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_fie_repeated_t *repeated_p);

void message_message_fie_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_fie_repeated_t *repeated_p);

void message_message_fie_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_repeated_t *repeated_p);

void message_message_fie_foo_init(
    struct message_message_fie_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_fie_foo_t *next_p);

void message_message_fie_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_fie_foo_t *self_p);

void message_message_fie_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_foo_t *self_p);

void message_message_fie_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_fie_foo_repeated_t *repeated_p);

void message_message_fie_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_fie_foo_repeated_t *repeated_p);

void message_message_fie_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_foo_repeated_t *repeated_p);

void message_unused_inner_types_init(
    struct message_unused_inner_types_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_unused_inner_types_t *next_p);

void message_unused_inner_types_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_unused_inner_types_t *self_p);

void message_unused_inner_types_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_t *self_p);

void message_unused_inner_types_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_unused_inner_types_repeated_t *repeated_p);

void message_unused_inner_types_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_unused_inner_types_repeated_t *repeated_p);

void message_unused_inner_types_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_repeated_t *repeated_p);

void message_unused_inner_types_unused_message_init(
    struct message_unused_inner_types_unused_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_unused_inner_types_unused_message_t *next_p);

void message_unused_inner_types_unused_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_unused_inner_types_unused_message_t *self_p);

void message_unused_inner_types_unused_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_unused_message_t *self_p);

void message_unused_inner_types_unused_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p);

void message_unused_inner_types_unused_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p);

void message_unused_inner_types_unused_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p);

void message_foo_init(
    struct message_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_foo_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;

}

void message_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_foo_t *self_p)
{
}

void message_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_foo_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {


        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_foo_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_foo_encode_inner);
}

void message_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_foo_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_foo_t),
        (pbtools_message_init_t)message_foo_init,
        (pbtools_message_decode_inner_t)message_foo_decode_inner);
}

void message_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_foo_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct message_foo_t *
message_foo_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct message_foo_t),
                (pbtools_message_init_t)message_foo_init));
}

int message_foo_encode(
    struct message_foo_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)message_foo_encode_inner));
}

int message_foo_decode(
    struct message_foo_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)message_foo_decode_inner));
}

void message_bar_init(
    struct message_bar_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_bar_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->fie = 0;
}

void message_bar_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_bar_t *self_p)
{
    pbtools_encoder_write_int32(encoder_p, 333, self_p->fie);
}

void message_bar_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_bar_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 333:
            self_p->fie = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_bar_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_bar_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_bar_encode_inner);
}

void message_bar_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_bar_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_bar_t),
        (pbtools_message_init_t)message_bar_init,
        (pbtools_message_decode_inner_t)message_bar_decode_inner);
}

void message_bar_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_bar_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct message_bar_t *
message_bar_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct message_bar_t),
                (pbtools_message_init_t)message_bar_init));
}

int message_bar_encode(
    struct message_bar_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)message_bar_encode_inner));
}

int message_bar_decode(
    struct message_bar_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)message_bar_decode_inner));
}

void message_message_fie_foo_init(
    struct message_message_fie_foo_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_fie_foo_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->value = 0;
    message_bar_init(&self_p->bar, heap_p, NULL);
}

void message_message_fie_foo_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_fie_foo_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        1,
        &self_p->bar.base,
        (pbtools_message_encode_inner_t)message_bar_encode_inner);
    pbtools_encoder_write_bool(encoder_p, 5, self_p->value);
}

void message_message_fie_foo_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_foo_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 5:
            self_p->value = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 1:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->bar.base,
                (pbtools_message_decode_inner_t)message_bar_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_message_fie_foo_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_fie_foo_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_message_fie_foo_encode_inner);
}

void message_message_fie_foo_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_fie_foo_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_message_fie_foo_t),
        (pbtools_message_init_t)message_message_fie_foo_init,
        (pbtools_message_decode_inner_t)message_message_fie_foo_decode_inner);
}

void message_message_fie_foo_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_foo_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

void message_message_fie_init(
    struct message_message_fie_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_fie_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    message_message_fie_foo_init(&self_p->foo, heap_p, NULL);
}

void message_message_fie_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_fie_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        1,
        &self_p->foo.base,
        (pbtools_message_encode_inner_t)message_message_fie_foo_encode_inner);
}

void message_message_fie_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->foo.base,
                (pbtools_message_decode_inner_t)message_message_fie_foo_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_message_fie_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_fie_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_message_fie_encode_inner);
}

void message_message_fie_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_fie_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_message_fie_t),
        (pbtools_message_init_t)message_message_fie_init,
        (pbtools_message_decode_inner_t)message_message_fie_decode_inner);
}

void message_message_fie_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_fie_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

void message_message_init(
    struct message_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_message_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->foo = 0;
    message_bar_init(&self_p->bar, heap_p, NULL);
    message_message_fie_init(&self_p->fie, heap_p, NULL);
}

void message_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_message_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        4,
        &self_p->fie.base,
        (pbtools_message_encode_inner_t)message_message_fie_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        832,
        &self_p->bar.base,
        (pbtools_message_encode_inner_t)message_bar_encode_inner);
    pbtools_encoder_write_enum(encoder_p, 1, self_p->foo);
}

void message_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->foo = pbtools_decoder_read_enum(decoder_p, wire_type);
            break;

        case 832:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->bar.base,
                (pbtools_message_decode_inner_t)message_bar_decode_inner);
            break;

        case 4:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->fie.base,
                (pbtools_message_decode_inner_t)message_message_fie_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_message_encode_inner);
}

void message_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_message_t),
        (pbtools_message_init_t)message_message_init,
        (pbtools_message_decode_inner_t)message_message_decode_inner);
}

void message_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_message_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct message_message_t *
message_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct message_message_t),
                (pbtools_message_init_t)message_message_init));
}

int message_message_encode(
    struct message_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)message_message_encode_inner));
}

int message_message_decode(
    struct message_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)message_message_decode_inner));
}

void message_unused_inner_types_unused_message_init(
    struct message_unused_inner_types_unused_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_unused_inner_types_unused_message_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->v1 = 0;
}

void message_unused_inner_types_unused_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_unused_inner_types_unused_message_t *self_p)
{
    pbtools_encoder_write_bool(encoder_p, 1, self_p->v1);
}

void message_unused_inner_types_unused_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_unused_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->v1 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_unused_inner_types_unused_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_unused_inner_types_unused_message_encode_inner);
}

void message_unused_inner_types_unused_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_unused_inner_types_unused_message_t),
        (pbtools_message_init_t)message_unused_inner_types_unused_message_init,
        (pbtools_message_decode_inner_t)message_unused_inner_types_unused_message_decode_inner);
}

void message_unused_inner_types_unused_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_unused_message_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

void message_unused_inner_types_init(
    struct message_unused_inner_types_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct message_unused_inner_types_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->v2 = 0;
}

void message_unused_inner_types_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct message_unused_inner_types_t *self_p)
{
    pbtools_encoder_write_bool(encoder_p, 1, self_p->v2);
}

void message_unused_inner_types_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->v2 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void message_unused_inner_types_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct message_unused_inner_types_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)message_unused_inner_types_encode_inner);
}

void message_unused_inner_types_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct message_unused_inner_types_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct message_unused_inner_types_t),
        (pbtools_message_init_t)message_unused_inner_types_init,
        (pbtools_message_decode_inner_t)message_unused_inner_types_decode_inner);
}

void message_unused_inner_types_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct message_unused_inner_types_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct message_unused_inner_types_t *
message_unused_inner_types_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct message_unused_inner_types_t),
                (pbtools_message_init_t)message_unused_inner_types_init));
}

int message_unused_inner_types_encode(
    struct message_unused_inner_types_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)message_unused_inner_types_encode_inner));
}

int message_unused_inner_types_decode(
    struct message_unused_inner_types_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)message_unused_inner_types_decode_inner));
}
