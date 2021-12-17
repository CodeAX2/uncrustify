/**
 * @file align_braced_init_list.h
 *
 * @author  Guy Maurel
 * @license GPL v2+
 */

#ifndef ALIGN_BRACED_INIT_LIST_H_INCLUDED
#define ALIGN_BRACED_INIT_LIST_H_INCLUDED

#include "chunk_list.h"

/**
 * Aligns all braced init list operators on the same level as first, starting with
 * first.
 *
 * @param first  chunk pointing to the first braced init list
 */
chunk_t *align_braced_init_list(chunk_t *first, size_t span, size_t thresh, size_t *p_nl_count);

#endif /* ALIGN_BRACED_INIT_LIST_H_INCLUDED */
