//
// Created by michaelcode on 17-11-28.
//

#ifndef SEARCHBST_SEARCHBST_H
#define SEARCHBST_SEARCHBST_H

#include "../main.h"

typedef struct BiTNode{
    int data;
    BiTNode * lchild,*rchild;
}BiTNode,*BiTree;

Status SearchBST(BiTree T,int key,BiTree f,BiTree &p);
Status InsertBST(BiTree &T, int e);
Status CreateBST(BiTree &T,int n);
Status DeleteBST(BiTree &T,int key);

#endif //SEARCHBST_SEARCHBST_H
