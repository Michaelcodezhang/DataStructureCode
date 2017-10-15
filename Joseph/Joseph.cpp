//
// Created by michaelcode on 17-10-15.
//
#include <iostream>
#include "main.h"
#include "malloc.h"
using namespace std;

Status Joseph(int m,int n){
    LinkList L=NULL,p=NULL,t=NULL,T=NULL;
    int i,count=0,cnum=1;
    cout<<"please input the datas of Joseph:"<<endl;
    L=(LinkList)malloc(sizeof(LNode));
    cin>>L->data;
    L->num=cnum;
    p=L;
    for(i=1;i<n;i++){
        cnum++;
        t=(LinkList)malloc(sizeof(LNode));
        cin>>t->data;
        t->num=cnum;
        p->next=t;
        t->next=L;
        p=p->next;
    }
    T=t;
    LinkList q=T,k;
    q->next=L;
    cout<<"the outList is:"<<endl;
    int c=0;
    while(L!=NULL){
        count++;
        if(count==m){
            if(L==T){
                cout<<L->num<<" ";
                free(L);
                L=NULL;
                break;
            }
            c++;
            cout<<q->next->num<<" ";
            m=q->next->data;
            k=q->next;
            q->next=q->next->next;
            free(k);
            if(k==T){
                T=q;
            }
            if(k==L){
                L=T->next;
            }

            k=NULL;
            count=0;
        }
        else{
            q=q->next;
        }
    }
    return OK;
}
