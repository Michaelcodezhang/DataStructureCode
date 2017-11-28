//
// Created by michaelcode on 17-11-28.
//

#include "../main.h"
#include "SqList.h"

int SelectMinKey(SqList L,int i);

Status SelectSort(SqList &L){
    int i=0,j=0,t=0;
    for(i=1;i<L.length;i++){
        j=SelectMinKey(L,i);
        if(i!=j){
            t=L.r[i];
            L.r[i]=L.r[j];
            L.r[j]=t;
        }
    }
    return OK;
}

int SelectMinKey(SqList L,int i){
    int j=0,min=L.r[i],m=i;
    for(j=i+1;j<=L.length;j++){
        if(min>L.r[j]){
            min=L.r[j];
            m=j;
        }
    }
    return m;
}