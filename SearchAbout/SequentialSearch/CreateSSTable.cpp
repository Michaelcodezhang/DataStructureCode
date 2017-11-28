//
// Created by michaelcode on 17-11-28.
//
#include <iostream>
#include <malloc.h>
#include "main.h"
using namespace std;

Status CreateSSTable(SSTable &S){
    int i=1;
    cout<<"请输入您要建立的表长："<<endl;
    cin>>S.length;
    S.elem=(char*)malloc((S.length+1)* sizeof(char));
    if(!S.elem){
        return ERROR;
    }
    *(S.elem)='0';
    cout<<"请输入依次输入各项数据："<<endl;
    for(i=1;i<=S.length;i++){
        cin>>S.elem[i];
    }
    return OK;
}
