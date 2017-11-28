//
// Created by michaelcode on 17-11-28.
//

#include "../main.h"
#include "SearchBST.h"

Status SearchBST(BiTree T,int key,BiTree f,BiTree &p){
    if(!T){
        p=f;
        return FALSE;
    }else{
        if(EQ(T->data,key)){
            p=T;
            return TRUE;
        }else{
            if(LT(key,T->data)){
                SearchBST(T->lchild,key,T,p);
            }else{
                SearchBST(T->rchild,key,T,p);
            }
        }
    }
}