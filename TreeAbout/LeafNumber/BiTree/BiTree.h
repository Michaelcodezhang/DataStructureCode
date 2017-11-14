//
// Created by michaelcode on 17-11-14.
//

#ifndef LEAFNUMBER_BITREE_H
#define LEAFNUMBER_BITREE_H
#include "../main.h"

typedef struct BiTNode{
    char data;
    struct BiTNode * lchild,* rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree &T);
int LeafNumber_pre(BiTree T);
int LeafNumber_in(BiTree T);
int LeafNumber_post(BiTree T);

#endif //LEAFNUMBER_BITREE_H
