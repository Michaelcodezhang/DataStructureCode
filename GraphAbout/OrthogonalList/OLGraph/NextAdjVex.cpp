//
// Created by michaelcode on 17-11-21.
//

#include "OLGraph.h"

int NextAdjVex(OLGraph G,int v,int w){
    ArcBox *p=G.xlist[v].firstout;
    while(p!= nullptr){
        if(p->tailvex==w){
            if(p->tlink){
                return p->tlink->tailvex;
            } else{
                return -1;
            }
        } else{
            p=p->tlink;
        }
    }
    return -1;
}