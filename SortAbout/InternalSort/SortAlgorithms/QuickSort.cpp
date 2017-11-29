//
// Created by michaelcode on 17-11-29.
//

#include "../main.h"
#include "SqList.h"

int Partition(SqList &L,int low,int high);
Status QSort(SqList &L,int low,int high);
Status QuickSort(SqList &L);

Status QuickSort(SqList &L){
    QSort(L,1,L.length);
}

Status QSort(SqList &L,int low,int high){
    int pivotloc=0;
    if(low<high){
        pivotloc=Partition(L,low,high);
        QSort(L,low,pivotloc-1);
        QSort(L,pivotloc+1,high);
    }
}

int Partition(SqList &L,int low,int high){
    L.r[0]=L.r[low];
    while(low<high){
        while(low<high&&L.r[high]>=L.r[0]){
            high--;
        }
        L.r[low]=L.r[high];
        while(low<high&&L.r[low]<=L.r[0]){
            low++;
        }
        L.r[high]=L.r[low];
    }
    L.r[low]=L.r[0];
    return low;
}


