//
// Created by michaelcode on 17-10-30.
//

#include "../main.h"
#include "malloc.h"
#include "Queue.h"

Status InitMonkey(LinkQueue &Q,int n){
    int i=1;
    Q.front=Q.rear=(mon)malloc(sizeof(Mon));
    if(!Q.front){
        return OVERFLOW;
    }
    for(i=1;i<=n;i++){
        EnQueue(Q,i,0);
    }
    return OK;
}
