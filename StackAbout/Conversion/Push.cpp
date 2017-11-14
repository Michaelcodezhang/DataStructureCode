//
// Created by michaelcode on 17-10-23.
//
#include <iostream>
#include "main.h"
using namespace std;
Status Push(SqStack &S,int e){
    if(S.top-S.base>=S.stacksize){
        S.base=(int *)realloc(S.base,(S.stacksize+STACKINCREMENT)* sizeof(int));
        if(!S.base) return OVERFLOW;
        S.top=S.base+S.stacksize;
        S.stacksize+=STACKINCREMENT;
    }
    *S.top=e;
    S.top++;
    return OK;
}
