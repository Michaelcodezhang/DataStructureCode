//
// Created by michaelcode on 17-11-21.
//

#include "../main.h"
#include "malloc.h"
#include "Queue.h"

Status EnQueue(LinkQueue &Q,int e){
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