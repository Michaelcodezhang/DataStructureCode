//
// Created by michaelcode on 17-11-28.
//
#include <iostream>
#include "../main.h"
#include "SqList.h"
using namespace std;

Status CreateSqList(SqList &L){
    int i=0;L.r[0]=0;
    cout<<"请输入您要排序的序列长度："<<endl;
    cin>>L.length;
    cout<<"请依次输入序列元素：";
    for(i=1;i<=L.length;i++){
        cin>>L.r[i];
    }
    cout<<"序列已成功建立。"<<endl;
    return OK;
}