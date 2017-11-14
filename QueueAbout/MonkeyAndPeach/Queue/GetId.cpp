//
// Created by michaelcode on 17-10-30.
//
#include "Queue.h"

int GetId(LinkQueue Q){
    if(Q.front==Q.rear){
        return ERROR;
    }
    return Q.front->next->Id;
}
