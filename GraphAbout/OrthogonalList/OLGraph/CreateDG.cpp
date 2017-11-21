//
// Created by michaelcode on 17-11-21.
//

#include "../main.h"
#include "OLGraph.h"
#include <iostream>
#include <malloc.h>
using namespace std;

Status CreateDG(OLGraph &G){
    int i=0,k=0,j=0;
    char v1,v2;
    ArcBox *p;
    cout<<"请依次输入十字链表的顶点数目、弧数目："<<endl;
    cin>>G.vexnum>>G.arcnum;
    cout<<"请依次输入各顶点的数据"<<endl;
    for(i=0;i<G.vexnum;i++){
        cin>>G.xlist[i].data;
        G.xlist[i].firstin= nullptr;
        G.xlist[i].firstout= nullptr;
    }
    for(k=0;k<G.arcnum;k++){
        cout<<"请输入第"<<k+1<<"条弧的头尾结点"<<endl;
        cin>>v1>>v2;
        i=LocateVex(G,v1);
        j=LocateVex(G,v2);
        p=(ArcBox*)malloc(sizeof(ArcBox));
        p->headvex=i;
        p->tailvex=j;
        p->hlink=G.xlist[j].firstin;
        p->tlink=G.xlist[i].firstout;
        G.xlist[j].firstin=p;
        G.xlist[i].firstout=p;
    }
    return OK;
}

