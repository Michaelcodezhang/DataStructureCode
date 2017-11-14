//
// Created by michaelcode on 17-10-24.
//
#include <iostream>
#include "main.h"
using namespace std;
Status Push(SqStack &S,char e){
    if(S.top-S.base>=S.stacksize){
        S.base=(char *)realloc(S.base,(S.stacksize+STACKINCREMENT)* sizeof(char));
        if(!S.base) return OVERFLOW;
        S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
    }
    *S.top=e;
    S.top++;
    return OK;
}


