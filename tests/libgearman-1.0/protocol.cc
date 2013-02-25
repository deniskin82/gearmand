/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  Gearmand client and server library.
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
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

#include "gear_config.h"
#include <libtest/test.hpp>

using namespace libtest;

#include <cassert>
#include <cstring>
#include <libgearman/gearman.h>
#include <tests/protocol.h>

#ifndef __INTEL_COMPILER
#pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

test_return_t check_gearman_command_t(void *)
{
  ASSERT_EQ(0, int(GEARMAN_COMMAND_TEXT));
  ASSERT_EQ(1, int(GEARMAN_COMMAND_CAN_DO));
  ASSERT_EQ(2, int(GEARMAN_COMMAND_CANT_DO));
  ASSERT_EQ(3, int(GEARMAN_COMMAND_RESET_ABILITIES));
  ASSERT_EQ(4, int(GEARMAN_COMMAND_PRE_SLEEP));
  ASSERT_EQ(5, int(GEARMAN_COMMAND_UNUSED));
  ASSERT_EQ(6, int(GEARMAN_COMMAND_NOOP));
  ASSERT_EQ(7, int(GEARMAN_COMMAND_SUBMIT_JOB));
  ASSERT_EQ(8, int(GEARMAN_COMMAND_JOB_CREATED));
  ASSERT_EQ(9, int(GEARMAN_COMMAND_GRAB_JOB));
  ASSERT_EQ(10, int(GEARMAN_COMMAND_NO_JOB));
  ASSERT_EQ(11, int(GEARMAN_COMMAND_JOB_ASSIGN));
  ASSERT_EQ(12, int(GEARMAN_COMMAND_WORK_STATUS));
  ASSERT_EQ(13, int(GEARMAN_COMMAND_WORK_COMPLETE));
  ASSERT_EQ(14, int(GEARMAN_COMMAND_WORK_FAIL));
  ASSERT_EQ(15, int(GEARMAN_COMMAND_GET_STATUS));
  ASSERT_EQ(16, int(GEARMAN_COMMAND_ECHO_REQ));
  ASSERT_EQ(17, int(GEARMAN_COMMAND_ECHO_RES));
  ASSERT_EQ(18, int(GEARMAN_COMMAND_SUBMIT_JOB_BG));
  ASSERT_EQ(19, int(GEARMAN_COMMAND_ERROR));
  ASSERT_EQ(20, int(GEARMAN_COMMAND_STATUS_RES));
  ASSERT_EQ(21, int(GEARMAN_COMMAND_SUBMIT_JOB_HIGH));
  ASSERT_EQ(22, int(GEARMAN_COMMAND_SET_CLIENT_ID));
  ASSERT_EQ(23, int(GEARMAN_COMMAND_CAN_DO_TIMEOUT));
  ASSERT_EQ(24, int(GEARMAN_COMMAND_ALL_YOURS));
  ASSERT_EQ(25, int(GEARMAN_COMMAND_WORK_EXCEPTION));
  ASSERT_EQ(26, int(GEARMAN_COMMAND_OPTION_REQ));
  ASSERT_EQ(27, int(GEARMAN_COMMAND_OPTION_RES));
  ASSERT_EQ(28, int(GEARMAN_COMMAND_WORK_DATA));
  ASSERT_EQ(29, int(GEARMAN_COMMAND_WORK_WARNING));
  ASSERT_EQ(30, int(GEARMAN_COMMAND_GRAB_JOB_UNIQ));
  ASSERT_EQ(31, int(GEARMAN_COMMAND_JOB_ASSIGN_UNIQ));
  ASSERT_EQ(32, int(GEARMAN_COMMAND_SUBMIT_JOB_HIGH_BG));
  ASSERT_EQ(33, int(GEARMAN_COMMAND_SUBMIT_JOB_LOW));
  ASSERT_EQ(34, int(GEARMAN_COMMAND_SUBMIT_JOB_LOW_BG));
  ASSERT_EQ(35, int(GEARMAN_COMMAND_SUBMIT_JOB_SCHED));
  ASSERT_EQ(36, int(GEARMAN_COMMAND_SUBMIT_JOB_EPOCH));
  ASSERT_EQ(37, int(GEARMAN_COMMAND_SUBMIT_REDUCE_JOB));
  ASSERT_EQ(38, int(GEARMAN_COMMAND_SUBMIT_REDUCE_JOB_BACKGROUND));
  ASSERT_EQ(39, int(GEARMAN_COMMAND_GRAB_JOB_ALL));
  ASSERT_EQ(40, int(GEARMAN_COMMAND_JOB_ASSIGN_ALL));

  return TEST_SUCCESS;
}
