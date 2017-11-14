//
// Created by michaelcode on 17-11-14.
//

#include "../BiTree.h"
int num3=0;

int LeafNumber_post(BiTree T){
    if(T== nullptr){
        ;
    }else{
        LeafNumber_post(T->lchild);
        LeafNumber_post(T->rchild);
        if(T->lchild== nullptr&&T->rchild== nullptr){
            num3++;
        }
    }
    return num3;
}
