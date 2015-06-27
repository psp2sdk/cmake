/*
 * Copyright (C) 2015 PSP2SDK Project
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef _ERRNO_H_
#define _ERRNO_H_

enum {
	SCE_ERROR_ERRNO_EPERM               = 0x80010001,
	SCE_ERROR_ERRNO_ENOENT              = 0x80010002,
	SCE_ERROR_ERRNO_ESRCH               = 0x80010003,
	SCE_ERROR_ERRNO_EINTR               = 0x80010004,
	SCE_ERROR_ERRNO_EIO                 = 0x80010005,
	SCE_ERROR_ERRNO_ENXIO               = 0x80010006,
	SCE_ERROR_ERRNO_E2BIG               = 0x80010007,
	SCE_ERROR_ERRNO_ENOEXEC             = 0x80010008,
	SCE_ERROR_ERRNO_EBADF               = 0x80010009,
	SCE_ERROR_ERRNO_ECHILD              = 0x8001000a,
	SCE_ERROR_ERRNO_EAGAIN              = 0x8001000b,
	SCE_ERROR_ERRNO_ENOMEM              = 0x8001000c,
	SCE_ERROR_ERRNO_EACCES              = 0x8001000d,
	SCE_ERROR_ERRNO_EFAULT              = 0x8001000e,
	SCE_ERROR_ERRNO_ENOTBLK             = 0x8001000f,
	SCE_ERROR_ERRNO_EBUSY               = 0x80010010,
	SCE_ERROR_ERRNO_EEXIST              = 0x80010011,
	SCE_ERROR_ERRNO_EXDEV               = 0x80010012,
	SCE_ERROR_ERRNO_ENODEV              = 0x80010013,
	SCE_ERROR_ERRNO_ENOTDIR             = 0x80010014,
	SCE_ERROR_ERRNO_EISDIR              = 0x80010015,
	SCE_ERROR_ERRNO_EINVAL              = 0x80010016,
	SCE_ERROR_ERRNO_ENFILE              = 0x80010017,
	SCE_ERROR_ERRNO_EMFILE              = 0x80010018,
	SCE_ERROR_ERRNO_ENOTTY              = 0x80010019,
	SCE_ERROR_ERRNO_ETXTBSY             = 0x8001001a,
	SCE_ERROR_ERRNO_EFBIG               = 0x8001001b,
	SCE_ERROR_ERRNO_ENOSPC              = 0x8001001c,
	SCE_ERROR_ERRNO_ESPIPE              = 0x8001001d,
	SCE_ERROR_ERRNO_EROFS               = 0x8001001e,
	SCE_ERROR_ERRNO_EMLINK              = 0x8001001f,
	SCE_ERROR_ERRNO_EPIPE               = 0x80010020,
	SCE_ERROR_ERRNO_EDOM                = 0x80010021,
	SCE_ERROR_ERRNO_ERANGE              = 0x80010022,
	SCE_ERROR_ERRNO_ENOMSG              = 0x80010023,
	SCE_ERROR_ERRNO_EIDRM               = 0x80010024,
	SCE_ERROR_ERRNO_ECHRNG              = 0x80010025,
	SCE_ERROR_ERRNO_EL2NSYNC            = 0x80010026,
	SCE_ERROR_ERRNO_EL3HLT              = 0x80010027,
	SCE_ERROR_ERRNO_EL3RST              = 0x80010028,
	SCE_ERROR_ERRNO_ELNRNG              = 0x80010029,
	SCE_ERROR_ERRNO_EUNATCH             = 0x8001002a,
	SCE_ERROR_ERRNO_ENOCSI              = 0x8001002b,
	SCE_ERROR_ERRNO_EL2HLT              = 0x8001002c,
	SCE_ERROR_ERRNO_EDEADLK             = 0x8001002d,
	SCE_ERROR_ERRNO_ENOLCK              = 0x8001002e,
	SCE_ERROR_ERRNO_EFORMAT             = 0x8001002f,
	SCE_ERROR_ERRNO_EUNSUP              = 0x80010030,
	SCE_ERROR_ERRNO_EBADE               = 0x80010032,
	SCE_ERROR_ERRNO_EBADR               = 0x80010033,
	SCE_ERROR_ERRNO_EXFULL              = 0x80010034,
	SCE_ERROR_ERRNO_ENOANO              = 0x80010035,
	SCE_ERROR_ERRNO_EBADRQC             = 0x80010036,
	SCE_ERROR_ERRNO_EBADSLT             = 0x80010037,
	SCE_ERROR_ERRNO_EDEADLOCK           = 0x80010038,
	SCE_ERROR_ERRNO_EBFONT              = 0x80010039,
	SCE_ERROR_ERRNO_ENOSTR              = 0x8001003c,
	SCE_ERROR_ERRNO_ENODATA             = 0x8001003d,
	SCE_ERROR_ERRNO_ETIME               = 0x8001003e,
	SCE_ERROR_ERRNO_ENOSR               = 0x8001003f,
	SCE_ERROR_ERRNO_ENONET              = 0x80010040,
	SCE_ERROR_ERRNO_ENOPKG              = 0x80010041,
	SCE_ERROR_ERRNO_EREMOTE             = 0x80010042,
	SCE_ERROR_ERRNO_ENOLINK             = 0x80010043,
	SCE_ERROR_ERRNO_EADV                = 0x80010044,
	SCE_ERROR_ERRNO_ESRMNT              = 0x80010045,
	SCE_ERROR_ERRNO_ECOMM               = 0x80010046,
	SCE_ERROR_ERRNO_EPROTO              = 0x80010047,
	SCE_ERROR_ERRNO_EMULTIHOP           = 0x8001004a,
	SCE_ERROR_ERRNO_ELBIN               = 0x8001004b,
	SCE_ERROR_ERRNO_EDOTDOT             = 0x8001004c,
	SCE_ERROR_ERRNO_EBADMSG             = 0x8001004d,
	SCE_ERROR_ERRNO_EFTYPE              = 0x8001004f,
	SCE_ERROR_ERRNO_ENOTUNIQ            = 0x80010050,
	SCE_ERROR_ERRNO_EBADFD              = 0x80010051,
	SCE_ERROR_ERRNO_EREMCHG             = 0x80010052,
	SCE_ERROR_ERRNO_ELIBACC             = 0x80010053,
	SCE_ERROR_ERRNO_ELIBBAD             = 0x80010054,
	SCE_ERROR_ERRNO_ELIBSCN             = 0x80010055,
	SCE_ERROR_ERRNO_ELIBMAX             = 0x80010056,
	SCE_ERROR_ERRNO_ELIBEXEC            = 0x80010057,
	SCE_ERROR_ERRNO_ENOSYS              = 0x80010058,
	SCE_ERROR_ERRNO_ENMFILE             = 0x80010059,
	SCE_ERROR_ERRNO_ENOTEMPTY           = 0x8001005a,
	SCE_ERROR_ERRNO_ENAMETOOLONG        = 0x8001005b,
	SCE_ERROR_ERRNO_ELOOP               = 0x8001005c,
	SCE_ERROR_ERRNO_EOPNOTSUPP          = 0x8001005f,
	SCE_ERROR_ERRNO_EPFNOSUPPORT        = 0x80010060,
	SCE_ERROR_ERRNO_ECONNRESET          = 0x80010068,
	SCE_ERROR_ERRNO_ENOBUFS             = 0x80010069,
	SCE_ERROR_ERRNO_EAFNOSUPPORT        = 0x8001006a,
	SCE_ERROR_ERRNO_EPROTOTYPE          = 0x8001006b,
	SCE_ERROR_ERRNO_ENOTSOCK            = 0x8001006c,
	SCE_ERROR_ERRNO_ENOPROTOOPT         = 0x8001006d,
	SCE_ERROR_ERRNO_ESHUTDOWN           = 0x8001006e,
	SCE_ERROR_ERRNO_ECONNREFUSED        = 0x8001006f,
	SCE_ERROR_ERRNO_EADDRINUSE          = 0x80010070,
	SCE_ERROR_ERRNO_ECONNABORTED        = 0x80010071,
	SCE_ERROR_ERRNO_ENETUNREACH         = 0x80010072,
	SCE_ERROR_ERRNO_ENETDOWN            = 0x80010073,
	SCE_ERROR_ERRNO_ETIMEDOUT           = 0x80010074,
	SCE_ERROR_ERRNO_EHOSTDOWN           = 0x80010075,
	SCE_ERROR_ERRNO_EHOSTUNREACH        = 0x80010076,
	SCE_ERROR_ERRNO_EINPROGRESS         = 0x80010077,
	SCE_ERROR_ERRNO_EALREADY            = 0x80010078,
	SCE_ERROR_ERRNO_EDESTADDRREQ        = 0x80010079,
	SCE_ERROR_ERRNO_EMSGSIZE            = 0x8001007a,
	SCE_ERROR_ERRNO_EPROTONOSUPPORT     = 0x8001007b,
	SCE_ERROR_ERRNO_ESOCKTNOSUPPORT     = 0x8001007c,
	SCE_ERROR_ERRNO_EADDRNOTAVAIL       = 0x8001007d,
	SCE_ERROR_ERRNO_ENETRESET           = 0x8001007e,
	SCE_ERROR_ERRNO_EISCONN             = 0x8001007f,
	SCE_ERROR_ERRNO_ENOTCONN            = 0x80010080,
	SCE_ERROR_ERRNO_ETOOMANYREFS        = 0x80010081,
	SCE_ERROR_ERRNO_EPROCLIM            = 0x80010082,
	SCE_ERROR_ERRNO_EUSERS              = 0x80010083,
	SCE_ERROR_ERRNO_EDQUOT              = 0x80010084,
	SCE_ERROR_ERRNO_ESTALE              = 0x80010085,
	SCE_ERROR_ERRNO_ENOTSUP             = 0x80010086,
	SCE_ERROR_ERRNO_ENOMEDIUM           = 0x80010087,
	SCE_ERROR_ERRNO_ENOSHARE            = 0x80010088,
	SCE_ERROR_ERRNO_ECASECLASH          = 0x80010089,
	SCE_ERROR_ERRNO_EILSEQ              = 0x8001008a,
	SCE_ERROR_ERRNO_EOVERFLOW           = 0x8001008b,
	SCE_ERROR_ERRNO_ECANCELED           = 0x8001008c,
	SCE_ERROR_ERRNO_ENOTRECOVERABLE     = 0x8001008d,
	SCE_ERROR_ERRNO_EOWNERDEAD          = 0x8001008e,
};

int *_sceLibcErrnoLoc(void);

#define errno (*_sceLibcErrnoLoc())

#endif