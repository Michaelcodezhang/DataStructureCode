//
// Created by michaelcode on 17-11-14.
//

#include "../Main_LevelOrder.h"
#include "BiTree.h"

Status PreOrderTraverse(BiTree T,Status (*visit)(BiTree N)){
    if(T== nullptr){
        ;
    }
    else{
        visit(T);
        PreOrderTraverse(T->lchild,visit);
        PreOrderTraverse(T->rchild,visit);
    }
    return OK;
}
