/*
 * Copyright (C) 1999-2001  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM
 * DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL
 * INTERNET SOFTWARE CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/* $ISC: mutexblock.h,v 1.10 2001/01/09 21:57:15 bwelling Exp $ */

#ifndef ISC_MUTEXBLOCK_H
#define ISC_MUTEXBLOCK_H 1

#include <isc/lang.h>
#include <isc/mutex.h>
#include <isc/types.h>

ISC_LANG_BEGINDECLS

isc_result_t
isc_mutexblock_init(isc_mutex_t *block, unsigned int count);
/*
 * Initialize a block of locks.  If an error occurs all initialized locks
 * will be destroyed, if possible.
 *
 * Requires:
 *
 *	block != NULL
 *
 *	count > 0
 *
 * Returns:
 *
 *	Any code isc_mutex_init() can return is a valid return for this
 *	function.
 */

isc_result_t
isc_mutexblock_destroy(isc_mutex_t *block, unsigned int count);
/*
 * Destroy a block of locks.
 *
 * Requires:
 *
 *	block != NULL
 *
 *	count > 0
 *
 *	Each lock in the block be initialized via isc_mutex_init() or
 * 	the whole block was initialized via isc_mutex_initblock().
 *
 * Returns:
 *
 *	Any code isc_mutex_init() can return is a valid return for this
 *	function.
 */

ISC_LANG_ENDDECLS

#endif /* ISC_MUTEXBLOCK_H */
