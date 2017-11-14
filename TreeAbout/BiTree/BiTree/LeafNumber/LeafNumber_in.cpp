//
// Created by michaelcode on 17-11-14.
//

#include "../BiTree.h"
int num2=0;

int LeafNumber_in(BiTree T){
    if(T== nullptr){
        ;
    }else{
        LeafNumber_in(T->lchild);
        if(T->lchild== nullptr&&T->rchild== nullptr){
            num2++;
        }
        LeafNumber_in(T->rchild);
    }
    return num2;
}