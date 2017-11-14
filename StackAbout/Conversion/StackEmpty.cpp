//
// Created by michaelcode on 17-10-23.
//
#include <iostream>
#include "main.h"
using namespace std;

Status StackEmpty(SqStack S){
    if(S.base==S.top){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

