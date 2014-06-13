/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 *
 *  Data Differential's libhostle
 *
 *  Copyright (C) 2012 Data Differential, http://datadifferential.com/
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

#include <libhostile/function.h>
#include <libhostile/initialize.h>

#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

static int not_until= 500;

static struct function_st __function;

static pthread_once_t function_lookup_once= PTHREAD_ONCE_INIT;
static void set_local(void)
{
  __function= set_function("send", "HOSTILE_SEND");
}

void set_send_close(bool arg, int frequency, int not_until_arg)
{
  if (arg)
  {
    __function.frequency= frequency;
    not_until= not_until_arg;
  }
  else
  {
    __function.frequency= 0;
    not_until= 0;
  }
}

ssize_t send(int sockfd, const void *buf, size_t len, int flags)
{

  hostile_initialize();

  (void) pthread_once(&function_lookup_once, set_local);

  if (sockfd != -1)
  {
    if (is_called() == false)
    {
      if (__function.frequency)
      {
        if (--not_until < 0 && random() % __function.frequency)
        {
          __function._used++;
          int tmp_sockfd= dup(sockfd);
          shutdown(tmp_sockfd, SHUT_RDWR);
          close(tmp_sockfd);
          errno= ECONNRESET;
          return -1;
        }
      }
    }
  }

  set_called();
  ssize_t ret= __function.function.send(sockfd, buf, len, flags);
  reset_called();

  return ret;
}
