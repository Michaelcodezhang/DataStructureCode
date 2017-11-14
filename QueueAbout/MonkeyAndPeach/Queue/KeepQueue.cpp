//
// Created by michaelcode on 17-10-30.
//
#include "../main.h"
#include "./Queue.h"
#include "Queue.h"

Status KeepQueue(LinkQueue &Q){
    if(Q.front==Q.rear){
        return OVERFLOW;
    }
    if(Q.front->next==Q.rear){
        return OK;
    }
    mon p=Q.front->next;
    Q.front->next=p->next;
    Q.rear->next=p;
    p->next= nullptr;
    Q.rear=p;
    return OK;
}
