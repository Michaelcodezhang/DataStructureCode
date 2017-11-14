//
// Created by michaelcode on 17-10-30.
//
#include "../main.h"
#include "malloc.h"
#include "./Queue.h"

Status EnQueue(LinkQueue &Q,int Id,int PeachMon){
    mon p=(mon)malloc(sizeof(Mon));
    if(!p){
        return OVERFLOW;
    }
    p->Id=Id;
    p->PeachMon=PeachMon;
    p->next=NULL;
    Q.rear->next=p;
    Q.rear=p;
    return OK;
}
