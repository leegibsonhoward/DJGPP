// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2007 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

/** @file error_constants.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */

#ifndef _GLIBCXX_ERROR_CONSTANTS
#  define _GLIBCXX_ERROR_CONSTANTS 1

#include <bits/c++config.h>
#include <cerrno>

_GLIBCXX_BEGIN_NAMESPACE(std)

enum class errc
{
#ifdef EAFNOSUPPORT
      address_family_not_supported = 		EAFNOSUPPORT,
#endif
#ifdef EADDRINUSE
      address_in_use = 				EADDRINUSE,
#endif
#ifdef EADDRNOTAVAIL
      address_not_available = 			EADDRNOTAVAIL,
#endif
#ifdef EISCONN
      already_connected = 			EISCONN,
#endif
      argument_list_too_long = 			E2BIG,
      argument_out_of_domain = 			EDOM,
      bad_address = 				EFAULT,
      bad_file_descriptor = 			EBADF,

#ifdef _GLIBCXX_HAVE_EBADMSG
      bad_message = 				EBADMSG,
#endif

      broken_pipe = 				EPIPE,
#ifdef ECONNABORTED
      connection_aborted = 			ECONNABORTED,
#endif
#ifdef EALREADY
      connection_already_in_progress = 		EALREADY,
#endif
#ifdef ECONNREFUSED
      connection_refused = 			ECONNREFUSED,
#endif
#ifdef ECONNRESET
      connection_reset = 			ECONNRESET,
#endif
      cross_device_link = 			EXDEV,
#ifdef EDESTADDRREQ
      destination_address_required = 		EDESTADDRREQ,
#endif
      device_or_resource_busy = 		EBUSY,
      directory_not_empty = 			ENOTEMPTY,
      executable_format_error = 		ENOEXEC,
      file_exists = 	       			EEXIST,
      file_too_large = 				EFBIG,
      filename_too_long = 			ENAMETOOLONG,
      function_not_supported = 			ENOSYS,
#ifdef EHOSTUNREACH
      host_unreachable = 			EHOSTUNREACH,
#endif
#ifdef EIDRM
      identifier_removed = 			EIDRM,
#endif
#ifdef EILSEQ
      illegal_byte_sequence = 			EILSEQ,
#endif
      inappropriate_io_control_operation = 	ENOTTY,
      interrupted = 				EINTR,
      invalid_argument = 			EINVAL,
      invalid_seek = 				ESPIPE,
      io_error = 				EIO,
      is_a_directory = 				EISDIR,
#ifdef EMSGSIZE
      message_size = 				EMSGSIZE,
#endif
#ifdef ENETDOWN
      network_down = 				ENETDOWN,
#endif
#ifdef ENETRESET
      network_reset = 				ENETRESET,
#endif
#ifdef ENETUNREACH
      network_unreachable = 			ENETUNREACH,
#endif
#ifdef ENOBUFS
      no_buffer_space = 			ENOBUFS,
#endif
      no_child_process = 			ECHILD,

#ifdef _GLIBCXX_HAVE_ENOLINK
      no_link = 				ENOLINK,
#endif
      no_lock_available = 			ENOLCK,

#ifdef _GLIBCXX_HAVE_ENODATA
      no_message_available = 			ENODATA, 
#endif

#ifdef ENOMSG
      no_message = 				ENOMSG, 
#endif
#ifdef ENOPROTOOPT
      no_protocol_option = 			ENOPROTOOPT,
#endif
      no_space_on_device = 			ENOSPC,

#ifdef _GLIBCXX_HAVE_ENOSR
      no_stream_resources = 			ENOSR,
#endif

      no_such_device_or_address = 		ENXIO,
      no_such_device = 				ENODEV,
      no_such_file_or_directory = 		ENOENT,
      no_such_process = 			ESRCH,
      not_a_directory = 			ENOTDIR,
#ifdef ENOTSOCK
      not_a_socket = 				ENOTSOCK,
#endif

#ifdef _GLIBCXX_HAVE_ENOSTR
      not_a_stream = 				ENOSTR,
#endif

#ifdef ENOTCONN
      not_connected = 				ENOTCONN,
#endif
      not_enough_memory = 			ENOMEM,
#ifdef ENOTSUP
      not_supported = 				ENOTSUP,
#endif

#ifdef _GLIBCXX_HAVE_ECANCELED
      operation_canceled = 			ECANCELED,
#endif

#ifdef EINPROGRESS
      operation_in_progress = 			EINPROGRESS,
#endif
      operation_not_permitted = 		EPERM,
#ifdef EOPNOTSUPP
      operation_not_supported = 		EOPNOTSUPP,
#endif
#ifdef EWOULDBLOCK
      operation_would_block = 			EWOULDBLOCK,
#endif

#ifdef _GLIBCXX_HAVE_EOWNERDEAD
      owner_dead = 				EOWNERDEAD,
#endif
      permission_denied = 			EACCES,
#ifdef _GLIBCXX_HAVE_EPROTO
      protocol_error = 				EPROTO,
#endif

#ifdef EPROTONOSUPPORT
      protocol_not_supported = 			EPROTONOSUPPORT,
#endif
      read_only_file_system = 			EROFS,
      resource_deadlock_would_occur = 		EDEADLK,
      resource_unavailable_try_again = 		EAGAIN,
      result_out_of_range = 			ERANGE,
#ifdef _GLIBCXX_HAVE_ENOTRECOVERABLE
      state_not_recoverable = 			ENOTRECOVERABLE,
#endif

#ifdef _GLIBCXX_HAVE_ETIME
      stream_timeout = 				ETIME,
#endif

#ifdef ETXTBSY
      text_file_busy = 				ETXTBSY,
#endif
#ifdef ETIMEDOUT
      timed_out = 				ETIMEDOUT,
#endif
      too_many_files_open_in_system = 		ENFILE,
      too_many_files_open = 			EMFILE,
      too_many_links = 				EMLINK,
#ifdef ELOOP
      too_many_synbolic_link_levels = 		ELOOP,
#endif
#ifdef _GLIBCXX_HAVE_EOVERFLOW
      value_too_large = 			EOVERFLOW,
#endif

#ifdef EPROTOTYPE
      wrong_protocol_type = 			EPROTOTYPE,
#endif
      no_posix_equivalent = 1L << 16
};

_GLIBCXX_END_NAMESPACE

#endif
