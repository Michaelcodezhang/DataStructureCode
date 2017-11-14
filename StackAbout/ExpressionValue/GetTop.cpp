//
// Created by michaelcode on 17-10-24.
//
#include <iostream>
#include "main.h"
using namespace std;
char GetTop(SqStack S){
    if(S.top==S.base){
        return ERROR;
    } else{
        return *(S.top-1);
    }
}
