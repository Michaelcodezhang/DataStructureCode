//
// Created by michaelcode on 17-10-30.
//

#include "../main.h"
#include "Queue.h"

Status AddPeachMon(LinkQueue &Q,int add){
    if(Q.front==Q.rear){
        return ERROR;
    }
    Q.front->next->PeachMon+=add;
    return OK;
}