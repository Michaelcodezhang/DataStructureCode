//
// Created by michaelcode on 17-10-25.
//
#include "../main.h"
#include "malloc.h"
#include "Queue.h"

Status EnQueue(LinkQueue &Q,char e){
    QueuePtr p=(QueuePtr)malloc(sizeof(QNode));
    if(!p){
        return OVERFLOW;
    }
    p->data=e;
    p->next=NULL;
    Q.rear->next=p;
    Q.rear=p;
    return OK;
}
