#include <stdio.h>
#include <stdlib.h>
#include "garcol.h"

string **shadowTable = NULL;

static size_t unqID=0;

void mon_allocShadow(void)
{
    if(shadowTable==NULL)
        shadowTable = (string **)malloc(sizeof(string*));
    else
        shadowTable = (string **)realloc(shadowTable,(unqID+1)*sizeof(string*));
}

void mon_freeShadow(void)
{
    for(size_t i=0;i<unqID;i++){
        free(shadowTable[i]->str);
        shadowTable[i]->str = NULL;
        shadowTable[i]->size = 0;
    }
    free(shadowTable);
    shadowTable = NULL;
}

void add_shadowEntry(string* p)
{
    shadowTable[unqID] = p;
    unqID++;
    mon_allocShadow();
}
