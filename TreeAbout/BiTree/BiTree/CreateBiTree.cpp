//
// Created by michaelcode on 17-11-12.
//

#include <cstdio>
#include <malloc.h>
#include "../Main_LevelOrder.h"
#include "BiTree.h"

Status CreateBiTree(BiTree &T){
    char ch;
    ch=getchar();
    if(ch==' ')T= nullptr;
    else{
        if(!(T=(BiTree)malloc(sizeof(BiTNode)))){
            return OVERFLOW;
        }
        T->data=ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return OK;
}