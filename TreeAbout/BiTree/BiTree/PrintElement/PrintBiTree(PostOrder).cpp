//
// Created by michaelcode on 17-11-14.
//

#include "../../Main_LevelOrder.h"
#include "../BiTree.h"

Status PrintBiTree_post(BiTree T){
    PostOrderTraverse(T,PrintElement);
    return OK;
}
