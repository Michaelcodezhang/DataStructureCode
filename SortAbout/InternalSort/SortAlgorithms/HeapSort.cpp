//
// Created by michaelcode on 17-11-28.
//

#include "../main.h"
#include "SqList.h"

Status HeapAdjust(SqList &H,int s,int m);

Status HeapSort(SqList &H){
    int i=0,t=0;
    for(i=H.length/2;i>0;i--){
        HeapAdjust(H,i,H.length);
    }
    for(i=H.length;i>1;--i){
        t=H.r[1];
        H.r[1]=H.r[i];
        H.r[i]=t;
        HeapAdjust(H,1,i-1);
    }
    return OK;
}

Status HeapAdjust(SqList &H,int s,int m){
    int rc=H.r[s],j=0;
    for(j=s*2;j<=m;j*=2){
        if(j<m&&LT(H.r[j],H.r[j+1])){
            j++;
        }
        if(!LT(rc,H.r[j])){ break;}
        H.r[s]=H.r[j];
        s=j;
    }
    H.r[s]=rc;
    return OK;
}