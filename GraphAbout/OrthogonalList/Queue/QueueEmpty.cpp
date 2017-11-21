//
// Created by michaelcode on 17-11-21.
//

#include "Queue.h"

Status QueueEmpty(LinkQueue Q){
    if(Q.front==Q.rear){
        return TRUE;
    } else{
        return FALSE;
    }
}