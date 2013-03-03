/*
 * libEtPan! -- a mail stuff library
 *
 * Copyright (C) 2001, 2013 - DINH Viet Hoa
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the libEtPan! project nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef CONDSTORE_PRIVATE_H

#define CONDSTORE_PRIVATE_H

enum {
  MAILIMAP_CONDSTORE_TYPE_FETCH_DATA,
  MAILIMAP_CONDSTORE_TYPE_RESP_TEXT_CODE,
  MAILIMAP_CONDSTORE_TYPE_SEARCH_DATA,
  MAILIMAP_CONDSTORE_TYPE_STATUS_INFO
};

int mailimap_examine_condstore_optional(mailimap * session, const char * mb,
  int condstore, uint64_t * p_mod_sequence_value);

int mailimap_select_condstore_optional(mailimap * session, const char * mb,
	int condstore, uint64_t * p_mod_sequence_value);

int mailimap_store_unchangedsince_optional(mailimap * session,
	struct mailimap_set * set, int use_unchangedsince, uint64_t mod_sequence_valzer,
  struct mailimap_store_att_flags * store_att_flags);

int mailimap_uid_store_unchangedsince_optional(mailimap * session,
	struct mailimap_set * set, int use_unchangedsince, uint64_t mod_sequence_valzer,
  struct mailimap_store_att_flags * store_att_flags);

#endif
