#ifndef _LIBSTROBJ_H
#define _LIBSTROBJ_H

#ifndef _STDIO_H
#error Add first +++[#include<stdio.h>] to the source code then add +++[#include "strobj.h"]
#elif defined _STDIO_H
#define BLANK {NULL,0}
#endif

#define String static string

typedef struct string{
     char* str;
     size_t size;
}string;

#include "garcol.h"

void append(string*,char);
void appendStr(string*,char*);
void scanStr(string*);

#endif
