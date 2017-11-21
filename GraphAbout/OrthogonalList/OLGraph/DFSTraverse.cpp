//
// Created by michaelcode on 17-11-21.
//
#include <iostream>
#include "../main.h"
#include "OLGraph.h"
using namespace std;

void DFS(OLGraph G,int v);

#define MAX 1000;
int DFSvisited[1000];

Status DFSTraverse(OLGraph G){
    int v=0;
    for(v=0;v<G.vexnum;v++){
        DFSvisited[v]=FALSE;
    }
    for(v=0;v<G.vexnum;v++){
        if(!DFSvisited[v]){
            DFS(G,v);
        }
    }
}

void DFS(OLGraph G,int v){
    int w=0;
    DFSvisited[v]=TRUE;
    cout<<G.xlist[v].data;
    for(w=FirstAdjVex(G,v);w>=0;w=NextAdjVex(G,v,w)){
        if(!DFSvisited[w]){
            DFS(G,w);
        }
    }
}