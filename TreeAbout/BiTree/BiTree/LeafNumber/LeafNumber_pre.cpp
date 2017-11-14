//
// Created by michaelcode on 17-11-14.
//

#include "../../Main_LevelOrder.h"
#include "../BiTree.h"
int num=0;

int LeafNumber_pre(BiTree T){
   if(T== nullptr){
       ;
   }else{
       if(T->lchild== nullptr&&T->rchild== nullptr){
           num++;
       }
       LeafNumber_pre(T->lchild);
       LeafNumber_pre(T->rchild);
   }
    return num;
}
