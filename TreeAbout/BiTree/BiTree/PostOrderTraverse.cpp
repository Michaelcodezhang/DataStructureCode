//
// Created by michaelcode on 17-11-14.
//

#include "../Main_LevelOrder.h"
#include "BiTree.h"

Status PostOrderTraverse(BiTree T,Status (*visit)(BiTree N)){
    if(T == nullptr){
        ;
    } else{
        PostOrderTraverse(T->lchild,visit);
        PostOrderTraverse(T->rchild,visit);
        visit(T);
    }
    return OK;
}
