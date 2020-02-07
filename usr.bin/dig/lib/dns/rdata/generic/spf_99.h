/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef GENERIC_SPF_99_H
#define GENERIC_SPF_99_H 1

/* $Id: spf_99.h,v 1.1 2020/02/07 09:58:53 florian Exp $ */

typedef struct dns_rdata_spf_string {
		uint8_t    length;
		unsigned char   *data;
} dns_rdata_spf_string_t;

typedef struct dns_rdata_spf {
	dns_rdatacommon_t       common;
	unsigned char           *txt;
	uint16_t            txt_len;
	/* private */
	uint16_t            offset;
} dns_rdata_spf_t;

/*
 * ISC_LANG_BEGINDECLS and ISC_LANG_ENDDECLS are already done
 * via rdatastructpre.h and rdatastructsuf.h.
 */
#endif /* GENERIC_SPF_99_H */
