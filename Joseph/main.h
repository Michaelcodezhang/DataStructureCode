//
// Created by michaelcode on 17-10-15.
//

#ifndef JOSEPH_MAIN_H
#define JOSEPH_MAIN_H

#define OK 1;
#define ERROR 2;
#define FEASIBLE -1;
#define OVERFLOW -2;
typedef int Status;

Status Joseph(int m,int n);
typedef struct LNode{
    int data;
    int num;
    LNode * next;
}LNode,*LinkList;

#endif //JOSEPH_MAIN_H
