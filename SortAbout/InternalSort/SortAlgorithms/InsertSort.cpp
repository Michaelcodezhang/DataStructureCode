//
// Created by michaelcode on 17-11-28.
//

#include "../main.h"
#include "SqList.h"

Status InsertSort(SqList &L){
    int i=0,j=0;
    for(i=2;i<=L.length;i++){
        if(LT(L.r[i],L.r[i-1])){
            L.r[0]=L.r[i];
            L.r[i]=L.r[i-1];
            for(j=i-2;LT(L.r[0],L.r[j]);j--){
                L.r[j+1]=L.r[j];
            }
            L.r[j+1]=L.r[0];
        }
    }
    return OK;
}