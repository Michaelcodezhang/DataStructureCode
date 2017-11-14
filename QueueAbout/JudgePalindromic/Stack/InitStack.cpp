//
// Created by michaelcode on 17-10-25.
//
#include <iostream>
#include "../main.h"
#include "Stack.h"
#include "malloc.h"
using namespace std;

Status InitStack(SqStack &S){
    S.base=(char *)malloc(STACK_INIT_SIZE*sizeof(char));
    if(!S.base) return OVERFLOW;
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
    return OK;
}

