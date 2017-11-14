//
// Created by michaelcode on 17-10-24.
//
#include <iostream>
#include "main.h"
using namespace std;

Status Pop(SqStack &S,char &e){
    if(StackEmpty(S)){
        return ERROR;
    }
    S.top--;
    e=*S.top;
    return OK;
}
