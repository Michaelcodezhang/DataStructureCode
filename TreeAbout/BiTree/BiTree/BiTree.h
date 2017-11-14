//
// Created by michaelcode on 17-11-12.
//

#ifndef BITREE_BITREE_H
#define BITREE_BITREE_H

#include "../Main_LevelOrder.h"

typedef struct BiTNode{
    char data;
    struct BiTNode * lchild,* rchild;
}BiTNode,*BiTree;

Status CreateBiTree(BiTree &T);
int BiTreeDepth(BiTree T);
Status PreOrderTraverse(BiTree T,Status (*visit)(BiTree N));
Status InOrderTraverse(BiTree T,Status (*visit)(BiTree N));
Status PostOrderTraverse(BiTree T,Status (*visit)(BiTree N));
Status LeverOrderTraverse(BiTree T);
Status PrintElement(BiTree N);
Status PrintBiTree_pre(BiTree T);
Status PrintBiTree_in(BiTree T);
Status PrintBiTree_post(BiTree T);
int LeafNumber_pre(BiTree T);
int LeafNumber_in(BiTree T);
int LeafNumber_post(BiTree T);

#endif //BITREE_BITREE_H
