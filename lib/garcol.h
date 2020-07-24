#ifndef _LIBGARCOL_H
#define _LIBGARCOL_H
#include "strobj.h"

void mon_allocShadow(void) __attribute__((constructor));
void mon_freeShadow(void) __attribute__((destructor));

void mon_allocShadow(void);
void mon_freeShadow(void);
void add_shadowEntry(string*);

#endif
