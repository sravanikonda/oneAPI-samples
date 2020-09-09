// ==============================================================
// Copyright Corporation
//
// SPDX-License-Identifier: MIT
// =============================================================
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// This agreement shall be governed in all respects by the laws of the State of
// California and by the laws of the United States of America.

#ifndef __CRC32_H__
#define __CRC32_H__
#pragma once

#include <stdint.h>
#include <stdlib.h>

uint32_t Crc32Host(
    const char *pbuf,        // pointer to the buffer to crc
    size_t sz,               // number of bytes
    uint32_t previous_crc);  // previous CRC, allows combining. First invocation
                             // would use 0xffffffff.
uint32_t Crc32(const char *pbuf,        // pointer to the buffer to crc
               size_t sz,               // number of bytes
               uint32_t previous_crc);  // previous CRC, allows combining. First
                                        // invocation would use 0xffffffff.

#endif  //__CRC32_H__
