//
// Created by michaelcode on 17-11-29.
//

#include "../main.h"
#include "SqList.h"

Status BInsertSort(SqList &L){
    int i=0,low=0,high=0,m=0,j=0;
    for(i=2;i<=L.length;i++){
        L.r[0]=L.r[i];
        low=1;
        high=i-1;
        while (low<=high){
            m=(low+high)/2;
            if(LT(L.r[0],L.r[m])){
                high=m-1;
            } else{
                low=m+1;
            }
        }
        for(j=i-1;j>=high+1;j--){
            L.r[j+1]=L.r[j];
        }
        L.r[high+1]=L.r[0];
    }
    return OK;
}