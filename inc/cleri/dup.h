/*
 * dup.h - this cleri element can be used to duplicate an element.
 *
 * author       : Jeroen van der Heijden
 * email        : jeroen@transceptor.technology
 * copyright    : 2017, Transceptor Technology
 *
 * changes
 *  - initial version, 21-06-2017
 *
 */
#ifndef CLERI_DUP_H_
#define CLERI_DUP_H_

#include <stddef.h>
#include <inttypes.h>
#include <cleri/cleri.h>

/* typedefs */
typedef struct cleri_s cleri_t;
typedef struct cleri_dup_s cleri_dup_t;

/* public functions */
cleri_t * cleri_dup(uint32_t gid, cleri_t * cl_obj);

/* structs */
// cleri_dup_t is defined in cleri.h

#endif /* CLERI_DUP_H_ */