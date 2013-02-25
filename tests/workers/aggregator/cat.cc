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

#include <gear_config.h>
#include <libtest/test.hpp>

using namespace libtest;

#include <libgearman-1.0/gearman.h>

#include "tests/workers/aggregator/cat.h"

#include <cassert>
#include <cstring>

gearman_return_t cat_aggregator_fn(gearman_aggregator_st *, gearman_task_st *task, gearman_result_st *result)
{
  std::string string_value;

  do
  {
    assert(task);
    gearman_result_st *result_ptr= gearman_task_result(task);

    if (result_ptr)
    {
      if (gearman_result_size(result_ptr) == 0)
      {
        return GEARMAN_WORK_EXCEPTION;
      }

      string_value.append(gearman_result_value(result_ptr), gearman_result_size(result_ptr));
    }
  } while ((task= gearman_next(task)));

  gearman_result_store_value(result, string_value.c_str(), string_value.size());

  return GEARMAN_SUCCESS;
}
