//
// Created by michaelcode on 17-11-1.
//

#ifndef STRING_STRING_H
#define STRING_STRING_H

#include "../main.h"

typedef struct{
    char *ch;
    int length;
}HString;

Status StrAssign(HString &T,char *chars);
int StrLength(HString S);
int StrCompare(HString S,HString T);
Status ClearString(HString &S);
Status Concat(HString &T,HString S1,HString S2);
Status PrintString(HString S);
Status SubString(HString &Sub,HString S,int pos,int len);
int Index_KMP(HString S,HString T,int pos);

#endif //STRING_STRING_H
