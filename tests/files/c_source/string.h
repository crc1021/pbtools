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

#ifndef STRING_H
#define STRING_H

#include "pbtools.h"

/**
 * Message string.Message.
 */
struct string_message_repeated_t {
    int length;
    struct string_message_t **items_pp;
    struct string_message_t *head_p;
    struct string_message_t *tail_p;
};

struct string_message_t {
    struct pbtools_message_base_t base;
    struct pbtools_bytes_t value;
};

/**
 * Create a new message string.Message in given workspace.
 *
 * @param[in] workspace_p Message workspace.
 * @param[in] size Workspace size.
 *
 * @return Initialized address book, or NULL on failure.
 */
struct string_message_t *
string_message_new(
    void *workspace_p,
    size_t size);

/**
 * Encode message string.Message.
 *
 * @param[in] self_p Message to encode.
 * @param[out] encoded_p Buffer to encode the message into.
 * @param[in] size Encoded buffer size.
 *
 * @return Encoded data length or negative error code.
 */
int string_message_encode(
    struct string_message_t *self_p,
    uint8_t *encoded_p,
    size_t size);

/**
 * Decode message string.Message.
 *
 * @param[in,out] self_p Initialized message to decode into.
 * @param[in] encoded_p Buffer to decode.
 * @param[in] size Size of the encoded message.
 *
 * @return Number of bytes decoded or negative error code.
 */
int string_message_decode(
    struct string_message_t *self_p,
    const uint8_t *encoded_p,
    size_t size);

#endif
