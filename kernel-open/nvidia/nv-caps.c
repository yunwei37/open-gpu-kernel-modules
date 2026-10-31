/*
 * SPDX-FileCopyrightText: Copyright (c) 2019-2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "nv-linux.h"
#include "nv-caps.h"
#include "nv-caps-imex.h"
nv_cap_t *nv_cap_init(const char *p) { return NULL; }
nv_cap_t *nv_cap_create_dir_entry(nv_cap_t *p,const char *n,int m) { return NULL; }
nv_cap_t *nv_cap_create_file_entry(nv_cap_t *p,const char *n,int m) { return NULL; }
void nv_cap_destroy_entry(nv_cap_t *p) { }
int nv_cap_validate_and_dup_fd(const nv_cap_t *p,int fd) { return -1; }
void nv_cap_close_fd(int fd) { }
int nv_cap_drv_init(void) { return 0; }
void nv_cap_drv_exit(void) { }
int nv_caps_imex_init(void) { return 0; }
void nv_caps_imex_exit(void) { }
int nv_caps_imex_channel_get(int fd) { return -1; }
int nv_caps_imex_channel_count(void) { return 0; }
