//
// Created by michaelcode on 17-10-30.
//
#include "../main.h"
#include "malloc.h"
#include "./Queue.h"

int DeQueue(LinkQueue &Q){
    if(Q.front==Q.rear){
        return OVERFLOW;
    }
    int Id;
    mon p=Q.front->next;
    Id=p->Id;
    Q.front->next=p->next;
    if(p==Q.rear){
        Q.rear=Q.front;
    }
    free(p);
    return Id;
}

