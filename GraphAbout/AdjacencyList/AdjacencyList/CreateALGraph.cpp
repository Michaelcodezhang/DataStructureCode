//
// Created by michaelcode on 17-11-15.
//
#include <iostream>
#include "../main.h"
#include "AdjacencyList.h"
using namespace std;

Status CreateUDALG(ALGraph &G);
Status CreateDALG(ALGraph &G);

Status CreateALGraph(ALGraph &G){
    cout<<"请选择图的种类（无向图输入0/有向图输入1）：";
    cin>>G.kind;
    if(G.kind==0){
        CreateUDALG(G);
    } else{
        CreateDALG(G);
    }
}

Status CreateUDALG(ALGraph &G){

}

Status CreateDALG(ALGraph &G){

}