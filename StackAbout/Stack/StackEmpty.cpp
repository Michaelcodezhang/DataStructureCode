//
// Created by michaelcode on 17-10-25.
//
#include <iostream>
#include "../main.h"
#include "Stack.h"

using namespace std;

Status StackEmpty(SqStack S){
    if(S.base==S.top){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
