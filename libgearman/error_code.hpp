/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf --compare-strncmp --switch=1 --key-positions=9,10,11,17 --struct-type libgearman/error_code.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 8 "libgearman/error_code.gperf"
 
/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  Gearmand client and server library.
 *
 *  Copyright (C) 2013 Data Differential, http://datadifferential.com/
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#pragma once

#include <cstddef>
#include <cstdlib>
#include <cstring>

#include "libgearman-1.0/return.h"

namespace org {
namespace gearman {

#line 59 "libgearman/error_code.gperf"
struct error_code_st
{ 
  const char* name;
  const gearman_return_t code;
};

#define TOTAL_KEYWORDS 52
#define MIN_WORD_LENGTH 13
#define MAX_WORD_LENGTH 33
#define MIN_HASH_VALUE 13
#define MAX_HASH_VALUE 118
/* maximum key range = 106, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_MEMCMP
#define GPERF_CASE_MEMCMP 1
static int
gperf_case_memcmp (register const char *s1, register const char *s2, register unsigned int n)
{
  for (; n > 0;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 == c2)
        {
          n--;
          continue;
        }
      return (int)c1 - (int)c2;
    }
  return 0;
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119,   0,  15,  35,  10,   0,
       30,  15,  25,  20,  10,  40,  15,  35,   0,   5,
       15,  40,   0,   0,   0,  10,   5,   5, 119, 119,
      119, 119, 119, 119, 119,   5, 119,   0,  15,  35,
       10,   0,  30,  15,  25,  20,  10,  40,  15,  35,
        0,   5,  15,  40,   0,   0,   0,  10,   5,   5,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119, 119, 119, 119, 119,
      119, 119, 119, 119, 119, 119
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct error_code_st *
error_string2return_code (register const char *str, register unsigned int len)
{
  static const struct error_code_st wordlist[] =
    {
#line 70 "libgearman/error_code.gperf"
      {"GEARMAN_ERRNO", GEARMAN_ERRNO},
#line 71 "libgearman/error_code.gperf"
      {"GEARMAN_EVENT", GEARMAN_EVENT},
#line 102 "libgearman/error_code.gperf"
      {"GEARMAN_SERVER_ERROR", GEARMAN_SERVER_ERROR},
#line 91 "libgearman/error_code.gperf"
      {"GEARMAN_NO_JOBS", GEARMAN_NO_JOBS},
#line 88 "libgearman/error_code.gperf"
      {"GEARMAN_NOT_CONNECTED", GEARMAN_NOT_CONNECTED},
#line 110 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_DATA", GEARMAN_WORK_DATA},
#line 94 "libgearman/error_code.gperf"
      {"GEARMAN_NO_SERVERS", GEARMAN_NO_SERVERS},
#line 114 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_STATUS", GEARMAN_WORK_STATUS},
#line 115 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_WARNING", GEARMAN_WORK_WARNING},
#line 90 "libgearman/error_code.gperf"
      {"GEARMAN_NO_ACTIVE_FDS", GEARMAN_NO_ACTIVE_FDS},
#line 112 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_EXCEPTION", GEARMAN_WORK_EXCEPTION},
#line 111 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_ERROR", GEARMAN_WORK_ERROR},
#line 73 "libgearman/error_code.gperf"
      {"GEARMAN_GETADDRINFO", GEARMAN_GETADDRINFO},
#line 107 "libgearman/error_code.gperf"
      {"GEARMAN_UNEXPECTED_PACKET", GEARMAN_UNEXPECTED_PACKET},
#line 106 "libgearman/error_code.gperf"
      {"GEARMAN_TOO_MANY_ARGS", GEARMAN_TOO_MANY_ARGS},
#line 68 "libgearman/error_code.gperf"
      {"GEARMAN_DATA_TOO_LARGE", GEARMAN_DATA_TOO_LARGE},
#line 95 "libgearman/error_code.gperf"
      {"GEARMAN_PAUSE", GEARMAN_PAUSE},
#line 101 "libgearman/error_code.gperf"
      {"GEARMAN_SEND_IN_PROGRESS", GEARMAN_SEND_IN_PROGRESS},
#line 92 "libgearman/error_code.gperf"
      {"GEARMAN_NO_REGISTERED_FUNCTION", GEARMAN_NO_REGISTERED_FUNCTION},
#line 93 "libgearman/error_code.gperf"
      {"GEARMAN_NO_REGISTERED_FUNCTIONS", GEARMAN_NO_REGISTERED_FUNCTIONS},
#line 113 "libgearman/error_code.gperf"
      {"GEARMAN_WORK_FAIL", GEARMAN_WORK_FAIL},
#line 85 "libgearman/error_code.gperf"
      {"GEARMAN_LOST_CONNECTION", GEARMAN_LOST_CONNECTION},
#line 81 "libgearman/error_code.gperf"
      {"GEARMAN_IN_PROGRESS", GEARMAN_IN_PROGRESS},
#line 82 "libgearman/error_code.gperf"
      {"GEARMAN_IO_WAIT", GEARMAN_IO_WAIT},
#line 66 "libgearman/error_code.gperf"
      {"GEARMAN_ARGUMENT_TOO_LARGE", GEARMAN_ARGUMENT_TOO_LARGE},
#line 83 "libgearman/error_code.gperf"
      {"GEARMAN_JOB_EXISTS", GEARMAN_JOB_EXISTS},
#line 75 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_ARGUMENT", GEARMAN_INVALID_ARGUMENT},
#line 89 "libgearman/error_code.gperf"
      {"GEARMAN_NOT_FLUSHING", GEARMAN_NOT_FLUSHING},
#line 103 "libgearman/error_code.gperf"
      {"GEARMAN_SHUTDOWN", GEARMAN_SHUTDOWN},
#line 84 "libgearman/error_code.gperf"
      {"GEARMAN_JOB_QUEUE_FULL", GEARMAN_JOB_QUEUE_FULL},
#line 116 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_SERVER_OPTION", GEARMAN_INVALID_SERVER_OPTION},
#line 97 "libgearman/error_code.gperf"
      {"GEARMAN_PTHREAD", GEARMAN_PTHREAD},
#line 74 "libgearman/error_code.gperf"
      {"GEARMAN_IGNORE_PACKET", GEARMAN_IGNORE_PACKET},
#line 100 "libgearman/error_code.gperf"
      {"GEARMAN_SEND_BUFFER_TOO_SMALL", GEARMAN_SEND_BUFFER_TOO_SMALL},
#line 65 "libgearman/error_code.gperf"
      {"GEARMAN_SUCCESS", GEARMAN_SUCCESS},
#line 80 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_WORKER_FUNCTION", GEARMAN_INVALID_WORKER_FUNCTION},
#line 79 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_PACKET", GEARMAN_INVALID_PACKET},
#line 87 "libgearman/error_code.gperf"
      {"GEARMAN_NEED_WORKLOAD_FN", GEARMAN_NEED_WORKLOAD_FN},
#line 104 "libgearman/error_code.gperf"
      {"GEARMAN_SHUTDOWN_GRACEFUL", GEARMAN_SHUTDOWN_GRACEFUL},
#line 96 "libgearman/error_code.gperf"
      {"GEARMAN_PIPE_EOF", GEARMAN_PIPE_EOF},
#line 98 "libgearman/error_code.gperf"
      {"GEARMAN_QUEUE_ERROR", GEARMAN_QUEUE_ERROR},
#line 105 "libgearman/error_code.gperf"
      {"GEARMAN_TIMEOUT", GEARMAN_TIMEOUT},
#line 109 "libgearman/error_code.gperf"
      {"GEARMAN_UNKNOWN_STATE", GEARMAN_UNKNOWN_STATE},
#line 72 "libgearman/error_code.gperf"
      {"GEARMAN_FLUSH_DATA", GEARMAN_FLUSH_DATA},
#line 99 "libgearman/error_code.gperf"
      {"GEARMAN_RECV_IN_PROGRESS", GEARMAN_RECV_IN_PROGRESS},
#line 67 "libgearman/error_code.gperf"
      {"GEARMAN_COULD_NOT_CONNECT", GEARMAN_COULD_NOT_CONNECT},
#line 108 "libgearman/error_code.gperf"
      {"GEARMAN_UNKNOWN_OPTION", GEARMAN_UNKNOWN_OPTION},
#line 78 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_MAGIC", GEARMAN_INVALID_MAGIC},
#line 76 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_COMMAND", GEARMAN_INVALID_COMMAND},
#line 77 "libgearman/error_code.gperf"
      {"GEARMAN_INVALID_FUNCTION_NAME", GEARMAN_INVALID_FUNCTION_NAME},
#line 69 "libgearman/error_code.gperf"
      {"GEARMAN_ECHO_DATA_CORRUPTION", GEARMAN_ECHO_DATA_CORRUPTION},
#line 86 "libgearman/error_code.gperf"
      {"GEARMAN_MEMORY_ALLOCATION_FAILURE", GEARMAN_MEMORY_ALLOCATION_FAILURE}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct error_code_st *resword;

          switch (key - 13)
            {
              case 0:
                if (len == 13)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 13)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 20)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 15)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 21)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 17)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 18)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 19)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 20)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 18:
                if (len == 21)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 22)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 20:
                if (len == 18)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 19)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 25)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 23:
                if (len == 21)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 22)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 13)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 26:
                if (len == 24)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 30)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 31)
                  {
                    resword = &wordlist[19];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 17)
                  {
                    resword = &wordlist[20];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 23)
                  {
                    resword = &wordlist[21];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 19)
                  {
                    resword = &wordlist[22];
                    goto compare;
                  }
                break;
              case 32:
                if (len == 15)
                  {
                    resword = &wordlist[23];
                    goto compare;
                  }
                break;
              case 33:
                if (len == 26)
                  {
                    resword = &wordlist[24];
                    goto compare;
                  }
                break;
              case 35:
                if (len == 18)
                  {
                    resword = &wordlist[25];
                    goto compare;
                  }
                break;
              case 36:
                if (len == 24)
                  {
                    resword = &wordlist[26];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 20)
                  {
                    resword = &wordlist[27];
                    goto compare;
                  }
                break;
              case 38:
                if (len == 16)
                  {
                    resword = &wordlist[28];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 22)
                  {
                    resword = &wordlist[29];
                    goto compare;
                  }
                break;
              case 41:
                if (len == 29)
                  {
                    resword = &wordlist[30];
                    goto compare;
                  }
                break;
              case 42:
                if (len == 15)
                  {
                    resword = &wordlist[31];
                    goto compare;
                  }
                break;
              case 43:
                if (len == 21)
                  {
                    resword = &wordlist[32];
                    goto compare;
                  }
                break;
              case 46:
                if (len == 29)
                  {
                    resword = &wordlist[33];
                    goto compare;
                  }
                break;
              case 47:
                if (len == 15)
                  {
                    resword = &wordlist[34];
                    goto compare;
                  }
                break;
              case 48:
                if (len == 31)
                  {
                    resword = &wordlist[35];
                    goto compare;
                  }
                break;
              case 49:
                if (len == 22)
                  {
                    resword = &wordlist[36];
                    goto compare;
                  }
                break;
              case 51:
                if (len == 24)
                  {
                    resword = &wordlist[37];
                    goto compare;
                  }
                break;
              case 52:
                if (len == 25)
                  {
                    resword = &wordlist[38];
                    goto compare;
                  }
                break;
              case 53:
                if (len == 16)
                  {
                    resword = &wordlist[39];
                    goto compare;
                  }
                break;
              case 56:
                if (len == 19)
                  {
                    resword = &wordlist[40];
                    goto compare;
                  }
                break;
              case 57:
                if (len == 15)
                  {
                    resword = &wordlist[41];
                    goto compare;
                  }
                break;
              case 58:
                if (len == 21)
                  {
                    resword = &wordlist[42];
                    goto compare;
                  }
                break;
              case 60:
                if (len == 18)
                  {
                    resword = &wordlist[43];
                    goto compare;
                  }
                break;
              case 61:
                if (len == 24)
                  {
                    resword = &wordlist[44];
                    goto compare;
                  }
                break;
              case 62:
                if (len == 25)
                  {
                    resword = &wordlist[45];
                    goto compare;
                  }
                break;
              case 64:
                if (len == 22)
                  {
                    resword = &wordlist[46];
                    goto compare;
                  }
                break;
              case 68:
                if (len == 21)
                  {
                    resword = &wordlist[47];
                    goto compare;
                  }
                break;
              case 70:
                if (len == 23)
                  {
                    resword = &wordlist[48];
                    goto compare;
                  }
                break;
              case 71:
                if (len == 29)
                  {
                    resword = &wordlist[49];
                    goto compare;
                  }
                break;
              case 75:
                if (len == 28)
                  {
                    resword = &wordlist[50];
                    goto compare;
                  }
                break;
              case 105:
                if (len == 33)
                  {
                    resword = &wordlist[51];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_memcmp (str, s, len))
              return resword;
          }
        }
    }
  return 0;
}
#line 117 "libgearman/error_code.gperf"


} // namespace gearman
} // namespace org
