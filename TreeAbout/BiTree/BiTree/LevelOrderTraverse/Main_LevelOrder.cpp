//
// Created by michaelcode on 17-11-14.
//
#include <iostream>
#include "../../Main_LevelOrder.h"
#include "../BiTree.h"

using namespace std;

Status Recursion1(BiTree T,int m,char data_level[],int mark[]);

Status LeverOrderTraverse(BiTree T){
    int dep,i=1,k=1;
    dep=BiTreeDepth(T);
    int mark[dep+1];
    mark[1]=1;
    for(i=1;i<=dep;i++){
        mark[i]=k;
        k*=2;
    }
    char data_level[k];
    for(i=0;i<k;i++){
        data_level[i]='#';
    }
    Recursion1(T,1,data_level,mark);
    for(i=1;i<k;i++){
        if(data_level[i]=='#'){
            ;
        } else{
            cout<<data_level[i];
        }
    }
    return OK;
}

Status Recursion1(BiTree T,int m,char data_level[],int mark[]){
    if(T== nullptr){
        ;
    } else{
        data_level[mark[m]]=T->data;
        mark[m]++;
        Recursion1(T->lchild,m+1,data_level,mark);
        Recursion1(T->rchild,m+1,data_level,mark);
    }
    return OK;
}
