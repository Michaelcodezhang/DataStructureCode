//
// Created by michaelcode on 17-11-8.
//

#include <iostream>
#include "../main.h"
#include "Triple.h"
using namespace std;

Status CreateSMatrix(TSMatrix &M){
    int c=1,p=1,q=1;
    cout<<"请依次输入稀疏矩阵的行数、列数及非零元个数："<<endl;
    cin>>M.mu>>M.nu>>M.tu;
    for(p=1;p<=M.tu;p++){
        cout<<"请依次输入稀疏矩阵第"<<p<<"个非零元的行值、列值及数据值:";
        cin>>M.data[p].i>>M.data[p].j>>M.data[p].e;
    }
    return OK;
}