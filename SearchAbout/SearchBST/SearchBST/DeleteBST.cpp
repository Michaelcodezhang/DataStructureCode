//
// Created by michaelcode on 17-11-28.
//

#include <malloc.h>
#include "../main.h"
#include "SearchBST.h"

Status Delete(BiTree &p);

Status DeleteBST(BiTree &T,int key){
    if(!T){
        return FALSE;
    } else{
        if(EQ(key,T->data)){
            Delete(T);
        }else{
            if(LT(key,T->data)){
                return DeleteBST(T->lchild,key);
            } else{
                return DeleteBST(T->rchild,key);
            }
        }
    }
}

Status Delete(BiTree &p){
    BiTree q= nullptr,s= nullptr;
    if(!p->rchild){
        q=p;
        p=p->lchild;
        free(q);
    }else if(!p->lchild){
        q=p;
        p=p->rchild;
        free(q);
    } else{
        q=p;
        s=p->lchild;
        while(s->rchild){
            q=s;
            s=s->rchild;
        }
        p->data=s->data;
        if(q!=p){
            q->rchild=s->lchild;
        }else{
            q->lchild=s->lchild;
        }
        free(s);
    }
    return TRUE;
}