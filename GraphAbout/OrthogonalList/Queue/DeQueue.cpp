//
// Created by michaelcode on 17-11-21.
//

#include "../main.h"
#include "malloc.h"
#include "Queue.h"

int DeQueue(LinkQueue &Q){
    if(Q.front==Q.rear){
        return OVERFLOW;
    }
    int e;
    QueuePtr p=Q.front->next;
    e=p->data;
    Q.front->next=p->next;
    if(p==Q.rear){
        Q.rear=Q.front;
    }
    free(p);
    return e;
}
