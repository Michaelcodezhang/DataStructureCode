//
// Created by michaelcode on 17-11-14.
//

#include "../Main_LevelOrder.h"
#include "BiTree.h"

Status InOrderTraverse(BiTree T,Status (*visit)(BiTree N)){
    if(T== nullptr){
        ;
    } else{
        InOrderTraverse(T->lchild,visit);
        visit(T);
        InOrderTraverse(T->rchild,visit);
    }
    return OK;
}
