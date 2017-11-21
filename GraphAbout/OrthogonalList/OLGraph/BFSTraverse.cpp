//
// Created by michaelcode on 17-11-21.
//
#include <iostream>
#include "../main.h"
#include "OLGraph.h"
#include "../Queue/Queue.h"

using namespace std;

void BFS(OLGraph G,int v);

#define MAX 1000;
int BFSvisited[1000];

Status BFSTraverse(OLGraph G){
    int v=0,u=0,w=0;
    LinkQueue Q;
    for(v=0;v<G.vexnum;v++){
        BFSvisited[v]=FALSE;
    }
    InitQueue(Q);
    for(v=0;v<G.vexnum;v++){
        if(!BFSvisited[v]){
            BFSvisited[v]=TRUE;
            cout<<G.xlist[v].data;
            EnQueue(Q,v);
            while(!QueueEmpty(Q)){
               u=DeQueue(Q);
                for(w=FirstAdjVex(G,u);w>=0;w=NextAdjVex(G,u,w)){
                    if(!BFSvisited[w]){
                        BFSvisited[w]=TRUE;
                        cout<<G.xlist[w].data;
                        EnQueue(Q,w);
                    }
                }
            }
        }
    }
}
