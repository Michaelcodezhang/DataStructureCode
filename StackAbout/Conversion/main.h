//
// Created by michaelcode on 17-10-23.
//

#ifndef CONVERSION_MAIN_H
#define CONVERSION_MAIN_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
typedef int Status;

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct {
    int *base;
    int *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack &S);
Status StackEmpty(SqStack S);
Status Pop(SqStack &S,int &e);
Status Push(SqStack &S,int e);


#endif //CONVERSION_MAIN_H
