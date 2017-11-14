//
// Created by michaelcode on 17-10-24.
//

#ifndef EXPRESSIONVALUE_MAIN_H
#define EXPRESSIONVALUE_MAIN_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
typedef int Status;

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct {
    char *base;
    char *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack &S);
Status StackEmpty(SqStack S);
Status Pop(SqStack &S,char &e);
Status Push(SqStack &S,char e);
char GetTop(SqStack S);
bool OptrOrNot(char op);
char Precede(char op,char c);
char Operate(char a,char theta,char b);

#endif //EXPRESSIONVALUE_MAIN_H
