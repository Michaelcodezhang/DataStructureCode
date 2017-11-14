//
// Created by michaelcode on 17-10-23.
//
#include <iostream>
#include "main.h"
using namespace std;

Status Pop(SqStack &S,int &e){
    if(StackEmpty(S)){
        return ERROR;
    }
    S.top--;
    e=*S.top;
    return OK;
}

