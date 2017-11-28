//
// Created by michaelcode on 17-11-28.
//
#include <iostream>
#include "../main.h"
#include "SearchBST.h"
using namespace std;

Status CreateBST(BiTree &T,int n){
    int i=1,e=0;
    cout<<"请依次输入数据："<<endl;
    for(i=1;i<=n;i++){
        cin>>e;
        InsertBST(T,e);
    }
    return OK;
}