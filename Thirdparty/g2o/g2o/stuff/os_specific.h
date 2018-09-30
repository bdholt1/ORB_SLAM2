// g2o - General Graph Optimization

// Copyright (C) 2011 R. Kuemmerle, G. Grisetti, W. Burgard
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
// TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef G2O_OS_SPECIFIC_HH_
# define G2O_OS_SPECIFIC_HH_

# ifdef WINDOWS
#  include <stdio.h>
#  include <stdlib.h>
#  include <stdarg.h>
#  ifndef _WINDOWS
#   include <sys/time.h>
#  endif // ifndef _WINDOWS
#  define drand48() ((double)rand() / (double)RAND_MAX)

#  ifdef __cplusplus
extern "C" {
#  endif // ifdef __cplusplus

int vasprintf(char      **strp,
              const char *fmt,
              va_list     ap);

#  ifdef __cplusplus
}
#  endif // ifdef __cplusplus

# endif // ifdef WINDOWS

# ifdef UNIX
#  include <sys/time.h>

// nothing to do on real operating systems
# endif // ifdef UNIX

#endif // ifndef G2O_OS_SPECIFIC_HH_
