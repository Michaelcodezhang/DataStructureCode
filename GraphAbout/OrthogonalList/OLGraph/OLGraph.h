//
// Created by michaelcode on 17-11-21.
//

#ifndef ORTHOGONALLIST_OLGRAPH_H
#define ORTHOGONALLIST_OLGRAPH_H

#include "../main.h"

#define MAX_VERTEX_NUM 20
typedef struct ArcBox{
    int tailvex,headvex;
    struct ArcBox *hlink,*tlink;
    int *info;
}ArcBox;
typedef struct VexNode{
    char data;
    ArcBox *firstin,*firstout;
}VexNode;
typedef struct {
    VexNode xlist[MAX_VERTEX_NUM];
    int vexnum,arcnum;
}OLGraph;

int LocateVex(OLGraph G,char v);
Status CreateDG(OLGraph &G);
int FirstAdjVex(OLGraph G,int v);
int NextAdjVex(OLGraph G,int v,int w);
Status DFSTraverse(OLGraph G);
Status BFSTraverse(OLGraph G);

#endif //ORTHOGONALLIST_OLGRAPH_H
