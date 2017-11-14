//
// Created by michaelcode on 17-11-14.
//

#include "BiTree/BiTree.h"

Status Recursion2(BiTree T,int m);
int Dep_max=0;

int BiTreeDepth(BiTree T){
    Recursion2(T,1);
    return Dep_max;
}

Status Recursion2(BiTree T,int m){
    if(T== nullptr){
        ;
    } else{
        if(m>Dep_max){
            Dep_max=m;
        }
        Recursion2(T->lchild,m+1);
        Recursion2(T->rchild,m+1);
    }
    return OK;
}