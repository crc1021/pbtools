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

#ifndef NO_PACKAGE_IMPORTED_H
#define NO_PACKAGE_IMPORTED_H

#include "pbtools.h"

/**
 * Message NoPackageImportedMessage.
 */
struct no_package_imported_message_repeated_t {
    int length;
    struct no_package_imported_message_t **items_pp;
    struct no_package_imported_message_t *head_p;
    struct no_package_imported_message_t *tail_p;
};

struct no_package_imported_message_t {
    struct pbtools_message_base_t base;
    int32_t value;
};

/**
 * Encoding and decoding of NoPackageImportedMessage.
 */
struct no_package_imported_message_t *
no_package_imported_message_new(
    void *workspace_p,
    size_t size);

int no_package_imported_message_encode(
    struct no_package_imported_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

int no_package_imported_message_decode(
    struct no_package_imported_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

/* Internal functions. Do not use! */

void no_package_imported_message_init(
    struct no_package_imported_message_t *self_p,
    struct pbtools_heap_t *heap_p,
    struct no_package_imported_message_t *next_p);

void no_package_imported_message_encode_inner(
    struct pbtools_encoder_t *encoder_p,
    struct no_package_imported_message_t *self_p);

void no_package_imported_message_decode_inner(
    struct pbtools_decoder_t *decoder_p,
    struct no_package_imported_message_t *self_p);

void no_package_imported_message_encode_repeated_inner(
    struct pbtools_encoder_t *encoder_p,
    int field_number,
    struct no_package_imported_message_repeated_t *repeated_p);

void no_package_imported_message_decode_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    int wire_type,
    struct no_package_imported_message_repeated_t *repeated_p);

void no_package_imported_message_finalize_repeated_inner(
    struct pbtools_decoder_t *decoder_p,
    struct no_package_imported_message_repeated_t *repeated_p);

#endif
