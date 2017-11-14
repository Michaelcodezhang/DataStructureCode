//
// Created by michaelcode on 17-10-25.
//
#include <iostream>
#include "../main.h"
#include "Stack.h"

using namespace std;

char GetTop(SqStack S){
    if(S.top==S.base){
        return ERROR;
    } else{
        return *(S.top-1);
    }
}

