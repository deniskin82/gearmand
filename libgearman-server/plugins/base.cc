/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  Gearmand client and server library.
 *
 *  Copyright (C) 2012 Data Differential, http://datadifferential.com/
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

#include "libgearman-server/plugins/base.h"
#include <boost/program_options.hpp>

#include <libgearman-server/error.h>
#include <libgearman-server/constants.h>
#include "libgearman-server/struct/worker.h"
#include "libgearman-server/struct/function.h"
#include "libgearman-server/struct/job.h"
#include "libgearman-server/log.h"

#include <algorithm>
#include <string> 

struct gearman_server_con_st;
struct gearmand_packet_st;
struct gearman_server_st;

namespace gearmand {

Plugin::Plugin(const std::string &name_arg) :
  _command_line_options(name_arg),
  _name(name_arg),
  _match(name_arg)
  {
    std::transform(_match.begin(), _match.end(), _match.begin(), ::tolower);
  }

int Plugin::compare(const std::string& arg)
{
  return _match.compare(arg);
}

Plugin::~Plugin()
{
}

boost::program_options::options_description& Plugin::command_line_options()
{
  return _command_line_options;
}

namespace queue {

Context::~Context()
{
}

gearmand_error_t Context::store(gearman_server_st *server,
                                const char *unique,
                                size_t unique_size,
                                const char *function_name,
                                size_t function_name_size,
                                const void *data,
                                size_t data_size,
                                gearman_job_priority_t priority,
                                int64_t when)
{
  gearmand_log_debug(GEARMAN_DEFAULT_LOG_PARAM, "SHUTDOWN VALUE %s", _store_on_shutdown ? "true" : "false");
  if (_store_on_shutdown == false)
  {
    return add(server,
               unique, unique_size,
               function_name, function_name_size,
               data, data_size,
               priority,
               when);
  }

  return GEARMAND_SUCCESS;
}

void Context::save_job(gearman_server_st& server,
                       const gearman_server_job_st* server_job)
{
  if (_store_on_shutdown)
  {
    if (server_job->job_queued)
    {
      add(&server,
          server_job->unique, server_job->unique_length,
          server_job->function->function_name,
          server_job->function->function_name_size,
          server_job->data, server_job->data_size,
          server_job->priority, 
          server_job->when);
    }
  }
}


} // namespace queue

namespace protocol {

  Context::~Context()
  {
  }

} // namespace protocol

} // namespace gearmand
