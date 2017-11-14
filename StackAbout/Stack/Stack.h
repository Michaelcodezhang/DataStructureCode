//
// Created by michaelcode on 17-10-25.
//

#ifndef JUDGEPALINDROMIC_STACK_H
#define JUDGEPALINDROMIC_STACK_H

#include "../main.h"

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct SqStack{
    char *base;
    char *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack &S);
Status Push(SqStack &S,char e);
char Pop(SqStack &S);
char GetTop(SqStack S);
Status StackEmpty(SqStack S);

#endif //JUDGEPALINDROMIC_STACK_H
