//
// Created by michaelcode on 17-10-25.
//

#include <iostream>
#include "../main.h"
#include "Stack.h"
using namespace std;

char Pop(SqStack &S){
    char e;
    if(StackEmpty(S)){
        return ERROR;
    }
    S.top--;
    e=*S.top;
    return e;
}