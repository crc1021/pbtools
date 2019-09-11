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
#include "benchmark.h"

#if CHAR_BIT != 8
#    error "Number of bits in a char must be 8."
#endif

void benchmarks_proto3_google_message1_sub_message_init(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct benchmarks_proto3_google_message1_sub_message_t *next_p);

void benchmarks_proto3_google_message1_sub_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct benchmarks_proto3_google_message1_sub_message_t *self_p);

void benchmarks_proto3_google_message1_sub_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_sub_message_t *self_p);

void benchmarks_proto3_google_message1_sub_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_sub_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_sub_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_init(
    struct benchmarks_proto3_google_message1_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct benchmarks_proto3_google_message1_t *next_p);

void benchmarks_proto3_google_message1_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct benchmarks_proto3_google_message1_t *self_p);

void benchmarks_proto3_google_message1_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_t *self_p);

void benchmarks_proto3_google_message1_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p);

void benchmarks_proto3_google_message1_sub_message_init(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct benchmarks_proto3_google_message1_sub_message_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->field1 = 0;
    self_p->field2 = 0;
    self_p->field3 = 0;
    self_p->field15_p = "";
    self_p->field12 = 0;
    self_p->field13 = 0;
    self_p->field14 = 0;
    self_p->field16 = 0;
    self_p->field19 = 0;
    self_p->field20 = 0;
    self_p->field28 = 0;
    self_p->field21 = 0;
    self_p->field22 = 0;
    self_p->field23 = 0;
    self_p->field206 = 0;
    self_p->field203 = 0;
    self_p->field204 = 0;
    self_p->field205_p = "";
    self_p->field207 = 0;
    self_p->field300 = 0;
}

void benchmarks_proto3_google_message1_sub_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct benchmarks_proto3_google_message1_sub_message_t *self_p)
{
    pbtools_encoder_write_uint64(encoder_p, 300, self_p->field300);
    pbtools_encoder_write_uint64(encoder_p, 207, self_p->field207);
    pbtools_encoder_write_string(encoder_p, 205, self_p->field205_p);
    pbtools_encoder_write_int32(encoder_p, 204, self_p->field204);
    pbtools_encoder_write_fixed32(encoder_p, 203, self_p->field203);
    pbtools_encoder_write_bool(encoder_p, 206, self_p->field206);
    pbtools_encoder_write_bool(encoder_p, 23, self_p->field23);
    pbtools_encoder_write_int32(encoder_p, 22, self_p->field22);
    pbtools_encoder_write_fixed64(encoder_p, 21, self_p->field21);
    pbtools_encoder_write_bool(encoder_p, 28, self_p->field28);
    pbtools_encoder_write_bool(encoder_p, 20, self_p->field20);
    pbtools_encoder_write_int32(encoder_p, 19, self_p->field19);
    pbtools_encoder_write_int32(encoder_p, 16, self_p->field16);
    pbtools_encoder_write_int64(encoder_p, 14, self_p->field14);
    pbtools_encoder_write_int64(encoder_p, 13, self_p->field13);
    pbtools_encoder_write_bool(encoder_p, 12, self_p->field12);
    pbtools_encoder_write_string(encoder_p, 15, self_p->field15_p);
    pbtools_encoder_write_int32(encoder_p, 3, self_p->field3);
    pbtools_encoder_write_int32(encoder_p, 2, self_p->field2);
    pbtools_encoder_write_int32(encoder_p, 1, self_p->field1);
}

void benchmarks_proto3_google_message1_sub_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_sub_message_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            self_p->field1 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 2:
            self_p->field2 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 3:
            self_p->field3 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 15:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field15_p);
            break;

        case 12:
            self_p->field12 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 13:
            self_p->field13 = pbtools_decoder_read_int64(decoder_p, wire_type);
            break;

        case 14:
            self_p->field14 = pbtools_decoder_read_int64(decoder_p, wire_type);
            break;

        case 16:
            self_p->field16 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 19:
            self_p->field19 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 20:
            self_p->field20 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 28:
            self_p->field28 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 21:
            self_p->field21 = pbtools_decoder_read_fixed64(decoder_p, wire_type);
            break;

        case 22:
            self_p->field22 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 23:
            self_p->field23 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 206:
            self_p->field206 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 203:
            self_p->field203 = pbtools_decoder_read_fixed32(decoder_p, wire_type);
            break;

        case 204:
            self_p->field204 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 205:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field205_p);
            break;

        case 207:
            self_p->field207 = pbtools_decoder_read_uint64(decoder_p, wire_type);
            break;

        case 300:
            self_p->field300 = pbtools_decoder_read_uint64(decoder_p, wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }
}

void benchmarks_proto3_google_message1_sub_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)benchmarks_proto3_google_message1_sub_message_encode_inner);
}

void benchmarks_proto3_google_message1_sub_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct benchmarks_proto3_google_message1_sub_message_t),
        (pbtools_message_init_t)benchmarks_proto3_google_message1_sub_message_init,
        (pbtools_message_decode_inner_t)benchmarks_proto3_google_message1_sub_message_decode_inner);
}

void benchmarks_proto3_google_message1_sub_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_sub_message_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct benchmarks_proto3_google_message1_sub_message_t *
benchmarks_proto3_google_message1_sub_message_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct benchmarks_proto3_google_message1_sub_message_t),
                (pbtools_message_init_t)benchmarks_proto3_google_message1_sub_message_init));
}

int benchmarks_proto3_google_message1_sub_message_encode(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)benchmarks_proto3_google_message1_sub_message_encode_inner));
}

int benchmarks_proto3_google_message1_sub_message_decode(
    struct benchmarks_proto3_google_message1_sub_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)benchmarks_proto3_google_message1_sub_message_decode_inner));
}

void benchmarks_proto3_google_message1_init(
    struct benchmarks_proto3_google_message1_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct benchmarks_proto3_google_message1_t *next_p)
{
    self_p->base.heap_p = heap_p;
    self_p->base.next_p = &next_p->base;
    self_p->field1_p = "";
    self_p->field9_p = "";
    self_p->field18_p = "";
    self_p->field80 = 0;
    self_p->field81 = 0;
    self_p->field2 = 0;
    self_p->field3 = 0;
    self_p->field280 = 0;
    self_p->field6 = 0;
    self_p->field22 = 0;
    self_p->field4_p = "";
    self_p->field5.length = 0;
    self_p->field59 = 0;
    self_p->field7_p = "";
    self_p->field16 = 0;
    self_p->field130 = 0;
    self_p->field12 = 0;
    self_p->field17 = 0;
    self_p->field13 = 0;
    self_p->field14 = 0;
    self_p->field104 = 0;
    self_p->field100 = 0;
    self_p->field101 = 0;
    self_p->field102_p = "";
    self_p->field103_p = "";
    self_p->field29 = 0;
    self_p->field30 = 0;
    self_p->field60 = 0;
    self_p->field271 = 0;
    self_p->field272 = 0;
    self_p->field150 = 0;
    self_p->field23 = 0;
    self_p->field24 = 0;
    self_p->field25 = 0;
    benchmarks_proto3_google_message1_sub_message_init(&self_p->field15, heap_p, NULL);
    self_p->field78 = 0;
    self_p->field67 = 0;
    self_p->field68 = 0;
    self_p->field128 = 0;
    self_p->field129_p = "";
    self_p->field131 = 0;
}

void benchmarks_proto3_google_message1_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct benchmarks_proto3_google_message1_t *self_p)
{
    pbtools_encoder_write_int32(encoder_p, 131, self_p->field131);
    pbtools_encoder_write_string(encoder_p, 129, self_p->field129_p);
    pbtools_encoder_write_int32(encoder_p, 128, self_p->field128);
    pbtools_encoder_write_int32(encoder_p, 68, self_p->field68);
    pbtools_encoder_write_int32(encoder_p, 67, self_p->field67);
    pbtools_encoder_write_bool(encoder_p, 78, self_p->field78);
    pbtools_encoder_sub_message_encode(
        encoder_p,
        15,
        &self_p->field15.base,
        (pbtools_message_encode_inner_t)benchmarks_proto3_google_message1_sub_message_encode_inner);
    pbtools_encoder_write_int32(encoder_p, 25, self_p->field25);
    pbtools_encoder_write_bool(encoder_p, 24, self_p->field24);
    pbtools_encoder_write_int32(encoder_p, 23, self_p->field23);
    pbtools_encoder_write_int32(encoder_p, 150, self_p->field150);
    pbtools_encoder_write_int32(encoder_p, 272, self_p->field272);
    pbtools_encoder_write_int32(encoder_p, 271, self_p->field271);
    pbtools_encoder_write_int32(encoder_p, 60, self_p->field60);
    pbtools_encoder_write_bool(encoder_p, 30, self_p->field30);
    pbtools_encoder_write_int32(encoder_p, 29, self_p->field29);
    pbtools_encoder_write_string(encoder_p, 103, self_p->field103_p);
    pbtools_encoder_write_string(encoder_p, 102, self_p->field102_p);
    pbtools_encoder_write_int32(encoder_p, 101, self_p->field101);
    pbtools_encoder_write_int32(encoder_p, 100, self_p->field100);
    pbtools_encoder_write_int32(encoder_p, 104, self_p->field104);
    pbtools_encoder_write_bool(encoder_p, 14, self_p->field14);
    pbtools_encoder_write_bool(encoder_p, 13, self_p->field13);
    pbtools_encoder_write_bool(encoder_p, 17, self_p->field17);
    pbtools_encoder_write_bool(encoder_p, 12, self_p->field12);
    pbtools_encoder_write_int32(encoder_p, 130, self_p->field130);
    pbtools_encoder_write_int32(encoder_p, 16, self_p->field16);
    pbtools_encoder_write_string(encoder_p, 7, self_p->field7_p);
    pbtools_encoder_write_bool(encoder_p, 59, self_p->field59);
    pbtools_encoder_write_repeated_fixed64(encoder_p, 5, &self_p->field5);
    pbtools_encoder_write_string(encoder_p, 4, self_p->field4_p);
    pbtools_encoder_write_int64(encoder_p, 22, self_p->field22);
    pbtools_encoder_write_int32(encoder_p, 6, self_p->field6);
    pbtools_encoder_write_int32(encoder_p, 280, self_p->field280);
    pbtools_encoder_write_int32(encoder_p, 3, self_p->field3);
    pbtools_encoder_write_int32(encoder_p, 2, self_p->field2);
    pbtools_encoder_write_bool(encoder_p, 81, self_p->field81);
    pbtools_encoder_write_bool(encoder_p, 80, self_p->field80);
    pbtools_encoder_write_string(encoder_p, 18, self_p->field18_p);
    pbtools_encoder_write_string(encoder_p, 9, self_p->field9_p);
    pbtools_encoder_write_string(encoder_p, 1, self_p->field1_p);
}

void benchmarks_proto3_google_message1_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_t *self_p)
{
    int wire_type;

    while (pbtools_decoder_available(decoder_p)) {
        switch (pbtools_decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field1_p);
            break;

        case 9:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field9_p);
            break;

        case 18:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field18_p);
            break;

        case 80:
            self_p->field80 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 81:
            self_p->field81 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 2:
            self_p->field2 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 3:
            self_p->field3 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 280:
            self_p->field280 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 6:
            self_p->field6 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 22:
            self_p->field22 = pbtools_decoder_read_int64(decoder_p, wire_type);
            break;

        case 4:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field4_p);
            break;

        case 5:
            pbtools_decoder_read_repeated_fixed64(
                decoder_p,
                wire_type,
                &self_p->field5);
            break;

        case 59:
            self_p->field59 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 7:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field7_p);
            break;

        case 16:
            self_p->field16 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 130:
            self_p->field130 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 12:
            self_p->field12 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 17:
            self_p->field17 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 13:
            self_p->field13 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 14:
            self_p->field14 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 104:
            self_p->field104 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 100:
            self_p->field100 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 101:
            self_p->field101 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 102:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field102_p);
            break;

        case 103:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field103_p);
            break;

        case 29:
            self_p->field29 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 30:
            self_p->field30 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 60:
            self_p->field60 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 271:
            self_p->field271 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 272:
            self_p->field272 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 150:
            self_p->field150 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 23:
            self_p->field23 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 24:
            self_p->field24 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 25:
            self_p->field25 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 15:
            pbtools_decoder_sub_message_decode(
                decoder_p,
                wire_type,
                &self_p->field15.base,
                (pbtools_message_decode_inner_t)benchmarks_proto3_google_message1_sub_message_decode_inner);
            break;

        case 78:
            self_p->field78 = pbtools_decoder_read_bool(decoder_p, wire_type);
            break;

        case 67:
            self_p->field67 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 68:
            self_p->field68 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 128:
            self_p->field128 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        case 129:
            pbtools_decoder_read_string(decoder_p, wire_type, &self_p->field129_p);
            break;

        case 131:
            self_p->field131 = pbtools_decoder_read_int32(decoder_p, wire_type);
            break;

        default:
            pbtools_decoder_skip_field(decoder_p, wire_type);
            break;
        }
    }

    pbtools_decoder_finalize_repeated_fixed64(
        decoder_p,
        &self_p->field5);
}

int benchmarks_proto3_google_message1_field5_alloc(
    struct benchmarks_proto3_google_message1_t *self_p,
    int length)
{
    return (pbtools_alloc_repeated_fixed64(
                &self_p->base,
                length,
                &self_p->field5));
}

void benchmarks_proto3_google_message1_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p)
{
    pbtools_encode_repeated_inner(
        encoder_p,
        field_number,
        (struct pbtools_repeated_message_t *)repeated_p,
        (pbtools_message_encode_inner_t)benchmarks_proto3_google_message1_encode_inner);
}

void benchmarks_proto3_google_message1_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p)
{
    pbtools_decode_repeated_inner(
        decoder_p,
        wire_type,
        (struct pbtools_repeated_message_t *)repeated_p,
        sizeof(struct benchmarks_proto3_google_message1_t),
        (pbtools_message_init_t)benchmarks_proto3_google_message1_init,
        (pbtools_message_decode_inner_t)benchmarks_proto3_google_message1_decode_inner);
}

void benchmarks_proto3_google_message1_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct benchmarks_proto3_google_message1_repeated_t *repeated_p)
{
    pbtools_finalize_repeated_inner(
        decoder_p,
        (struct pbtools_repeated_message_t *)repeated_p);
}

struct benchmarks_proto3_google_message1_t *
benchmarks_proto3_google_message1_new(
    void *workspace_p,
    size_t size)
{
    return (pbtools_message_new(
                workspace_p,
                size,
                sizeof(struct benchmarks_proto3_google_message1_t),
                (pbtools_message_init_t)benchmarks_proto3_google_message1_init));
}

int benchmarks_proto3_google_message1_encode(
    struct benchmarks_proto3_google_message1_t *self_p,
    uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_encode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_encode_inner_t)benchmarks_proto3_google_message1_encode_inner));
}

int benchmarks_proto3_google_message1_decode(
    struct benchmarks_proto3_google_message1_t *self_p,
    const uint8_t *encoded_p,
    size_t size)
{
    return (pbtools_message_decode(
                &self_p->base,
                encoded_p,
                size,
                (pbtools_message_decode_inner_t)benchmarks_proto3_google_message1_decode_inner));
}
