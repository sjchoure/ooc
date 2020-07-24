#include <stdio.h>
#include <stdlib.h>
#include "strobj.h"

void append(string* p,char c)
{
    if(p->str==NULL){
        p->str = malloc((p->size+2)*sizeof(char));
        add_shadowEntry(p);
    }
    else{
        p->str = realloc(p->str,(p->size+2)*sizeof(char));
    }

    *(p->str+p->size) = c;
    *(p->str+p->size+1) = '\0';
    p->size++;
}

void appendStr(string* p,char* s)
{
    while(*(s)!='\0'){
        append(p,*(s));
        s++;
    }
}

void scanStr(string* p)
{
    char c;
    while((c=getchar())!='\n' && c!=EOF){
        append(p,c);
    }
}
