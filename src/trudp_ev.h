/*
 * The MIT License
 *
 * Copyright 2016 Kirill Scherba <kirill@scherba.ru>.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * File:   trudp_ev.h
 * Author: Kirill Scherba <kirill@scherba.ru>
 *
 * Created on July 27, 2016, 11:11 AM
 */

#ifdef USE_LIBEV

#ifndef TRUDP_EV_H
#define TRUDP_EV_H

#include <ev.h>

/**
 * Send queue processing data definition
 */
typedef struct trudpProcessSendQueueData {

    int inited;
    int started;
    trudpData *td;
    struct ev_loop *loop;
    ev_timer process_send_queue_w;

} trudpProcessSendQueueData;

#ifdef __cplusplus
extern "C" {
#endif

void trudp_start_send_queue_cb(trudpProcessSendQueueData *psd, uint64_t next_expected_time);

#ifdef __cplusplus
}
#endif

#endif /* TRUDP_EV_H */

#endif