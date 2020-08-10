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
#include "imported2.h"

#if CHAR_BIT != 8
#    error "Number of bits in a char must be 8."
#endif

void imported2_foo_bar_imported2_message_init(
    struct imported2_foo_bar_imported2_message_t *self_p,
    struct pbtools_heap_t *heap_p)
{
    self_p->base.heap_p = heap_p;
    self_p->v1_p = NULL;
}

void imported2_foo_bar_imported2_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct imported2_foo_bar_imported2_message_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        15,
        (struct pbtools_message_base_t *)self_p->v1_p,
        (pbtools_message_encode_inner_t)imported_imported_duplicated_package_message_encode_inner);
}

void imported2_foo_bar_imported2_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct imported2_foo_bar_imported2_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 15:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v1_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init,
                (pbtools_message_decode_inner_t)imported_imported_duplicated_package_message_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

int imported2_foo_bar_imported2_message_v1_alloc(
    struct imported2_foo_bar_imported2_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v1_p,
                self_p->base.heap_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init));
}

void imported2_foo_bar_imported2_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct imported2_foo_bar_imported2_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported2_message_t),
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported2_message_encode_inner);
}

void imported2_foo_bar_imported2_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct imported2_foo_bar_imported2_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        repeated_info_p,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported2_message_t),
        (pbtools_message_init_t)imported2_foo_bar_imported2_message_init,
        (pbtools_message_decode_inner_t)imported2_foo_bar_imported2_message_decode_inner);
}

struct imported2_foo_bar_imported2_message_t *
imported2_foo_bar_imported2_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct imported2_foo_bar_imported2_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported2_message_init));
}

int imported2_foo_bar_imported2_message_encode(
    struct imported2_foo_bar_imported2_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)imported2_foo_bar_imported2_message_encode_inner));
}

int imported2_foo_bar_imported2_message_decode(
    struct imported2_foo_bar_imported2_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)imported2_foo_bar_imported2_message_decode_inner));
}

void imported2_foo_bar_imported3_message_imported2_message_init(
    struct imported2_foo_bar_imported3_message_imported2_message_t *self_p,
    struct pbtools_heap_t *heap_p)
{
    self_p->base.heap_p = heap_p;
    self_p->v1_p = NULL;
}

void imported2_foo_bar_imported3_message_imported2_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct imported2_foo_bar_imported3_message_imported2_message_t *self_p)
{
    pbtools_encoder_sub_message_encode(
        encoder_p,
        16,
        (struct pbtools_message_base_t *)self_p->v1_p,
        (pbtools_message_encode_inner_t)imported_imported_duplicated_package_message_encode_inner);
}

void imported2_foo_bar_imported3_message_imported2_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct imported2_foo_bar_imported3_message_imported2_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 16:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v1_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init,
                (pbtools_message_decode_inner_t)imported_imported_duplicated_package_message_decode_inner);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

int imported2_foo_bar_imported3_message_imported2_message_v1_alloc(
    struct imported2_foo_bar_imported3_message_imported2_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v1_p,
                self_p->base.heap_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init));
}

void imported2_foo_bar_imported3_message_imported2_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct imported2_foo_bar_imported3_message_imported2_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported3_message_imported2_message_t),
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported3_message_imported2_message_encode_inner);
}

void imported2_foo_bar_imported3_message_imported2_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct imported2_foo_bar_imported3_message_imported2_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        repeated_info_p,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported3_message_imported2_message_t),
        (pbtools_message_init_t)imported2_foo_bar_imported3_message_imported2_message_init,
        (pbtools_message_decode_inner_t)imported2_foo_bar_imported3_message_imported2_message_decode_inner);
}

void imported2_foo_bar_imported3_message_init(
    struct imported2_foo_bar_imported3_message_t *self_p,
    struct pbtools_heap_t *heap_p)
{
    self_p->base.heap_p = heap_p;
    self_p->v1_p = NULL;
    self_p->v2_p = NULL;
    self_p->v3_p = NULL;
    self_p->v4_p = NULL;
    self_p->v5_p = NULL;
    self_p->v6_p = NULL;
    self_p->v7.length = 0;
    self_p->v9.length = 0;
    self_p->v8.length = 0;
    self_p->v10.length = 0;
}

void imported2_foo_bar_imported3_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    foo_bar_imported3_message_encode_repeated_inner(
        encoder_p,
        10,
        &self_p->v10);
    bar_imported3_message_encode_repeated_inner(
        encoder_p,
        8,
        &self_p->v8);
    foo_bar_imported3_message_encode_repeated_inner(
        encoder_p,
        9,
        &self_p->v9);
    bar_imported3_message_encode_repeated_inner(
        encoder_p,
        7,
        &self_p->v7);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        6,
        (struct pbtools_message_base_t *)self_p->v6_p,
        (pbtools_message_encode_inner_t)imported_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        5,
        (struct pbtools_message_base_t *)self_p->v5_p,
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        4,
        (struct pbtools_message_base_t *)self_p->v4_p,
        (pbtools_message_encode_inner_t)foo_bar_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        3,
        (struct pbtools_message_base_t *)self_p->v3_p,
        (pbtools_message_encode_inner_t)bar_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        2,
        (struct pbtools_message_base_t *)self_p->v2_p,
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported3_message_imported2_message_encode_inner);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        17,
        (struct pbtools_message_base_t *)self_p->v1_p,
        (pbtools_message_encode_inner_t)imported_imported_duplicated_package_message_encode_inner);
}

void imported2_foo_bar_imported3_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    int wire_type;
    struct pbtools_repeated_info_t repeated_info_v7;
    struct pbtools_repeated_info_t repeated_info_v9;
    struct pbtools_repeated_info_t repeated_info_v8;
    struct pbtools_repeated_info_t repeated_info_v10;

    pbtools_repeated_info_init(&repeated_info_v7, 7);
    pbtools_repeated_info_init(&repeated_info_v9, 9);
    pbtools_repeated_info_init(&repeated_info_v8, 8);
    pbtools_repeated_info_init(&repeated_info_v10, 10);

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 17:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v1_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init,
                (pbtools_message_decode_inner_t)imported_imported_duplicated_package_message_decode_inner);
            break;

        case 2:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v2_p,
                sizeof(struct imported2_foo_bar_imported3_message_imported2_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported3_message_imported2_message_init,
                (pbtools_message_decode_inner_t)imported2_foo_bar_imported3_message_imported2_message_decode_inner);
            break;

        case 3:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v3_p,
                sizeof(struct bar_imported2_message_t),
                (pbtools_message_init_t)bar_imported2_message_init,
                (pbtools_message_decode_inner_t)bar_imported2_message_decode_inner);
            break;

        case 4:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v4_p,
                sizeof(struct foo_bar_imported2_message_t),
                (pbtools_message_init_t)foo_bar_imported2_message_init,
                (pbtools_message_decode_inner_t)foo_bar_imported2_message_decode_inner);
            break;

        case 5:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v5_p,
                sizeof(struct imported2_foo_bar_imported2_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported2_message_init,
                (pbtools_message_decode_inner_t)imported2_foo_bar_imported2_message_decode_inner);
            break;

        case 6:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                (struct pbtools_message_base_t **)&self_p->v6_p,
                sizeof(struct imported_imported2_message_t),
                (pbtools_message_init_t)imported_imported2_message_init,
                (pbtools_message_decode_inner_t)imported_imported2_message_decode_inner);
            break;

        case 7:
            pbtools_repeated_info_decode(&repeated_info_v7,
                                         decoder_p,
                                         wire_type);
            break;

        case 9:
            pbtools_repeated_info_decode(&repeated_info_v9,
                                         decoder_p,
                                         wire_type);
            break;

        case 8:
            pbtools_repeated_info_decode(&repeated_info_v8,
                                         decoder_p,
                                         wire_type);
            break;

        case 10:
            pbtools_repeated_info_decode(&repeated_info_v10,
                                         decoder_p,
                                         wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }

    bar_imported3_message_decode_repeated_inner(
        decoder_p,
        &repeated_info_v7,
        &self_p->v7);
    foo_bar_imported3_message_decode_repeated_inner(
        decoder_p,
        &repeated_info_v9,
        &self_p->v9);
    bar_imported3_message_decode_repeated_inner(
        decoder_p,
        &repeated_info_v8,
        &self_p->v8);
    foo_bar_imported3_message_decode_repeated_inner(
        decoder_p,
        &repeated_info_v10,
        &self_p->v10);
}

int imported2_foo_bar_imported3_message_v1_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v1_p,
                self_p->base.heap_p,
                sizeof(struct imported_imported_duplicated_package_message_t),
                (pbtools_message_init_t)imported_imported_duplicated_package_message_init));
}

int imported2_foo_bar_imported3_message_v2_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v2_p,
                self_p->base.heap_p,
                sizeof(struct imported2_foo_bar_imported3_message_imported2_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported3_message_imported2_message_init));
}

int imported2_foo_bar_imported3_message_v3_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v3_p,
                self_p->base.heap_p,
                sizeof(struct bar_imported2_message_t),
                (pbtools_message_init_t)bar_imported2_message_init));
}

int imported2_foo_bar_imported3_message_v4_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v4_p,
                self_p->base.heap_p,
                sizeof(struct foo_bar_imported2_message_t),
                (pbtools_message_init_t)foo_bar_imported2_message_init));
}

int imported2_foo_bar_imported3_message_v5_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v5_p,
                self_p->base.heap_p,
                sizeof(struct imported2_foo_bar_imported2_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported2_message_init));
}

int imported2_foo_bar_imported3_message_v6_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p)
{
    return (pbtools_sub_message_alloc(
                (struct pbtools_message_base_t **)&self_p->v6_p,
                self_p->base.heap_p,
                sizeof(struct imported_imported2_message_t),
                (pbtools_message_init_t)imported_imported2_message_init));
}

int imported2_foo_bar_imported3_message_v7_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p,
    int length)
{
    return (pbtools_alloc_repeated(
                (struct pbtools_repeated_message_t *)&self_p->v7,
                length,
                self_p->base.heap_p,
                sizeof(struct bar_imported3_message_t),
                (pbtools_message_init_t)bar_imported3_message_init));
}

int imported2_foo_bar_imported3_message_v9_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p,
    int length)
{
    return (pbtools_alloc_repeated(
                (struct pbtools_repeated_message_t *)&self_p->v9,
                length,
                self_p->base.heap_p,
                sizeof(struct foo_bar_imported3_message_t),
                (pbtools_message_init_t)foo_bar_imported3_message_init));
}

int imported2_foo_bar_imported3_message_v8_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p,
    int length)
{
    return (pbtools_alloc_repeated(
                (struct pbtools_repeated_message_t *)&self_p->v8,
                length,
                self_p->base.heap_p,
                sizeof(struct bar_imported3_message_t),
                (pbtools_message_init_t)bar_imported3_message_init));
}

int imported2_foo_bar_imported3_message_v10_alloc(
    struct imported2_foo_bar_imported3_message_t *self_p,
    int length)
{
    return (pbtools_alloc_repeated(
                (struct pbtools_repeated_message_t *)&self_p->v10,
                length,
                self_p->base.heap_p,
                sizeof(struct foo_bar_imported3_message_t),
                (pbtools_message_init_t)foo_bar_imported3_message_init));
}

void imported2_foo_bar_imported3_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct imported2_foo_bar_imported3_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported3_message_t),
        (pbtools_message_encode_inner_t)imported2_foo_bar_imported3_message_encode_inner);
}

void imported2_foo_bar_imported3_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct imported2_foo_bar_imported3_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        repeated_info_p,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct imported2_foo_bar_imported3_message_t),
        (pbtools_message_init_t)imported2_foo_bar_imported3_message_init,
        (pbtools_message_decode_inner_t)imported2_foo_bar_imported3_message_decode_inner);
}

struct imported2_foo_bar_imported3_message_t *
imported2_foo_bar_imported3_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct imported2_foo_bar_imported3_message_t),
                (pbtools_message_init_t)imported2_foo_bar_imported3_message_init));
}

int imported2_foo_bar_imported3_message_encode(
    struct imported2_foo_bar_imported3_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)imported2_foo_bar_imported3_message_encode_inner));
}

int imported2_foo_bar_imported3_message_decode(
    struct imported2_foo_bar_imported3_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)imported2_foo_bar_imported3_message_decode_inner));
}
