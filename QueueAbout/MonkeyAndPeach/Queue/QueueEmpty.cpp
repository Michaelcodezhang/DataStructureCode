//
// Created by michaelcode on 17-10-30.
//
#include "Queue.h"

bool QueueEmpty(LinkQueue Q){
    if(Q.front==Q.rear){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
