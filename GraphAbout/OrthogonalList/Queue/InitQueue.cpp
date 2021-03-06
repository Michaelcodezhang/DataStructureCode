//
// Created by michaelcode on 17-11-21.
//

#include "../main.h"
#include "malloc.h"
#include "Queue.h"

Status InitQueue(LinkQueue &Q){
    Q.front=Q.rear=(QueuePtr)malloc(sizeof(QNode));
    if(!Q.front){
        return OVERFLOW;
    }
    Q.front->next=NULL;
    return OK;
}