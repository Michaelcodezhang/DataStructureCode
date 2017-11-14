//
// Created by michaelcode on 17-10-23.
//
#include <iostream>
#include "main.h"
#include "malloc.h"
using namespace std;

Status InitStack(SqStack &S){
    S.base=(int *)malloc(STACK_INIT_SIZE*sizeof(int));
    if(!S.base) return OVERFLOW;
    S.top=S.base;
    S.stacksize=STACK_INIT_SIZE;
    return OK;
}
