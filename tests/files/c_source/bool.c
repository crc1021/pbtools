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
 * This file was generated by pbtools version 0.1.0 Thu Jan 24 08:14:06 2019.
 */

#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "bool.h"

struct encoder_t {
    uint8_t *buf_p;
    int size;
    int pos;
};

struct decoder_t {
    const uint8_t *buf_p;
    int size;
    int pos;
    struct bool_heap_t *heap_p;
};

static uint8_t tag(int field_number, int wire_type)
{
    return ((field_number << 3) | wire_type);
}

static struct bool_heap_t *heap_new(void *buf_p, size_t size)
{
    struct bool_heap_t *heap_p;

    if (size >= sizeof(*heap_p)) {
        heap_p = (struct bool_heap_t *)buf_p;
        heap_p->buf_p = buf_p;
        heap_p->size = size;
        heap_p->pos = sizeof(*heap_p);
    } else {
        heap_p = NULL;
    }

    return (heap_p);
}

static void *heap_alloc(struct bool_heap_t *self_p, size_t size)
{
    void *buf_p;
    int left;

    left = (self_p->size - self_p->pos);

    if (size <= left) {
        buf_p = &self_p->buf_p[self_p->pos];
        self_p->pos += size;
    } else {
        buf_p = NULL;
    }

    return (buf_p);
}

static void encoder_init(struct encoder_t *self_p,
                         uint8_t *buf_p,
                         size_t size)
{
    self_p->buf_p = buf_p;
    self_p->size = size;
    self_p->pos = (size - 1);
}

static int encoder_get_result(struct encoder_t *self_p)
{
    int length;

    length = (self_p->size - self_p->pos - 1);
    memmove(self_p->buf_p,
            &self_p->buf_p[self_p->pos + 1],
            length);

    return (length);
}

static void encoder_put(struct encoder_t *self_p,
                        uint8_t value)
{
    if (self_p->pos < 0) {
        fprintf(stderr, "encoder_put: %d\n", self_p->pos);
        exit(1);
    }

    self_p->buf_p[self_p->pos] = value;
    self_p->pos--;
}

static void encoder_write_bool(struct encoder_t *self_p,
                               int field_number,
                               bool value)
{
    if (value) {
        encoder_put(self_p, 1);
        encoder_put(self_p, tag(field_number, 0));
    }
}

static void decoder_init(struct decoder_t *self_p,
                         const uint8_t *buf_p,
                         size_t size,
                         struct bool_heap_t *heap_p)
{
    self_p->buf_p = buf_p;
    self_p->size = size;
    self_p->pos = 0;
    self_p->heap_p = heap_p;
}

static int decoder_get_result(struct decoder_t *self_p)
{
    int res;

    if (self_p->pos == self_p->size) {
        res = self_p->pos;
    } else {
        res = -1;
    }

    return (res);
}

static bool decoder_available(struct decoder_t *self_p)
{
    return (self_p->pos < self_p->size);
}

static uint8_t decoder_get(struct decoder_t *self_p)
{
    uint8_t value;

    if (decoder_available(self_p)) {
        value = self_p->buf_p[self_p->pos];
        self_p->pos++;
    } else {
        self_p->size = -1;
        value = 0;
    }

    return (value);
}

static int decoder_read_tag(struct decoder_t *self_p,
                            int *wire_type_p)
{
    uint8_t value;

    value = decoder_get(self_p);
    *wire_type_p = (value & 0x7);

    return (value >> 3);
}

static bool decoder_read_bool(struct decoder_t *self_p,
                              int wire_type)
{
    if (wire_type != 0) {
        return (false);
    }

    return (decoder_get(self_p) == 1);
}

static void bool_message_encode_inner(
    struct encoder_t *encoder_p,
    struct bool_message_t *message_p)
{
    encoder_write_bool(encoder_p, 1, message_p->value);
}

static void bool_message_decode_inner(
    struct decoder_t *decoder_p,
    struct bool_message_t *message_p)
{
    int wire_type;

    while (decoder_available(decoder_p)) {
        switch (decoder_read_tag(decoder_p, &wire_type)) {

        case 1:
            message_p->value = decoder_read_bool(decoder_p, wire_type);
            break;

        default:
            break;
        }
    }
}

struct bool_message_t *bool_message_new(
    void *workspace_p,
    size_t size)
{
    struct bool_message_t *message_p;
    struct bool_heap_t *heap_p;

    heap_p = heap_new(workspace_p, size);

    if (heap_p == NULL) {
        return (NULL);
    }

    message_p = heap_alloc(heap_p, sizeof(*message_p));

    if (message_p != NULL) {
        message_p->heap_p = heap_p;
        message_p->value = 0;
    }

    return (message_p);
}

int bool_message_encode(
    struct bool_message_t *message_p,
    uint8_t *encoded_p,
    size_t size)
{
    struct encoder_t encoder;

    encoder_init(&encoder, encoded_p, size);
    bool_message_encode_inner(&encoder, message_p);

    return (encoder_get_result(&encoder));
}

int bool_message_decode(
    struct bool_message_t *message_p,
    const uint8_t *encoded_p,
    size_t size)
{
    struct decoder_t decoder;

    decoder_init(&decoder, encoded_p, size, message_p->heap_p);
    bool_message_decode_inner(&decoder, message_p);

    return (decoder_get_result(&decoder));
}
