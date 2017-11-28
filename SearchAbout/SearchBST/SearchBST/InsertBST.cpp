//
// Created by michaelcode on 17-11-28.
//

#include <malloc.h>
#include "SearchBST.h"
#include "../main.h"

Status InsertBST(BiTree &T, int e){
    BiTree p= nullptr,s= nullptr;
    if(!SearchBST(T,e, nullptr,p)){
        s=(BiTree)malloc(sizeof(BiTNode));
        s->data=e;
        s->rchild= nullptr;
        s->rchild= nullptr;
        if(!T){
            T=s;
        }else if(LT(e,p->data)){
            p->lchild=s;
        }else{
            p->rchild=s;
        }
        return TRUE;
    } else{
        return FALSE;
    }
}