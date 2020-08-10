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

#ifndef IMPORTED3_H
#define IMPORTED3_H

#ifdef __cplusplus
extern "C" {
#endif

#include "pbtools.h"
#include "imported1.h"

/**
 * Message bar.Imported2Message.
 */
struct bar_imported2_message_repeated_t {
    int length;
    struct bar_imported2_message_t *items_p;
};

struct bar_imported2_message_t {
    struct pbtools_message_base_t base;
    int32_t v1;
};

/**
 * Enum bar.Imported3Message.Enum.
 */
enum bar_imported3_message_enum_e {
    bar_imported3_message_enum_a_e = 0
};

/**
 * Message bar.Imported3Message.
 */
struct bar_imported3_message_repeated_t {
    int length;
    struct bar_imported3_message_t *items_p;
};

struct bar_imported3_message_t {
    struct pbtools_message_base_t base;
    int32_t v1;
};

/**
 * Message bar.Imported4Message.
 */
struct bar_imported4_message_repeated_t {
    int length;
    struct bar_imported4_message_t *items_p;
};

struct bar_imported4_message_t {
    struct pbtools_message_base_t base;
    struct bar_imported3_message_t *v1_p;
    struct foo_bar_imported3_message_t *v2_p;
};

/**
 * Encoding and decoding of bar.Imported2Message.
 */
struct bar_imported2_message_t *
bar_imported2_message_new(
    void *workspace_p,
    size_t size);

int bar_imported2_message_encode(
    struct bar_imported2_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int bar_imported2_message_decode(
    struct bar_imported2_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

/**
 * Encoding and decoding of bar.Imported3Message.
 */
struct bar_imported3_message_t *
bar_imported3_message_new(
    void *workspace_p,
    size_t size);

int bar_imported3_message_encode(
    struct bar_imported3_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int bar_imported3_message_decode(
    struct bar_imported3_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

int bar_imported4_message_v1_alloc(
    struct bar_imported4_message_t *self_p);

int bar_imported4_message_v2_alloc(
    struct bar_imported4_message_t *self_p);

/**
 * Encoding and decoding of bar.Imported4Message.
 */
struct bar_imported4_message_t *
bar_imported4_message_new(
    void *workspace_p,
    size_t size);

int bar_imported4_message_encode(
    struct bar_imported4_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int bar_imported4_message_decode(
    struct bar_imported4_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

/* Internal functions. Do not use! */

void bar_imported2_message_init(
    struct bar_imported2_message_t *self_p,
    struct pbtools_heap_t *heap_p);

void bar_imported2_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct bar_imported2_message_t *self_p);

void bar_imported2_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bar_imported2_message_t *self_p);

void bar_imported2_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct bar_imported2_message_repeated_t *repeated_p);

void bar_imported2_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct bar_imported2_message_repeated_t *repeated_p);

void bar_imported3_message_init(
    struct bar_imported3_message_t *self_p,
    struct pbtools_heap_t *heap_p);

void bar_imported3_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct bar_imported3_message_t *self_p);

void bar_imported3_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bar_imported3_message_t *self_p);

void bar_imported3_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct bar_imported3_message_repeated_t *repeated_p);

void bar_imported3_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct bar_imported3_message_repeated_t *repeated_p);

void bar_imported4_message_init(
    struct bar_imported4_message_t *self_p,
    struct pbtools_heap_t *heap_p);

void bar_imported4_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct bar_imported4_message_t *self_p);

void bar_imported4_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct bar_imported4_message_t *self_p);

void bar_imported4_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct bar_imported4_message_repeated_t *repeated_p);

void bar_imported4_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct pbtools_repeated_info_t *repeated_info_p,
    struct bar_imported4_message_repeated_t *repeated_p);

#ifdef __cplusplus
}
#endif

#endif
