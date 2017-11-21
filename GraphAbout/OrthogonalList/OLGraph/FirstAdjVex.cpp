//
// Created by michaelcode on 17-11-21.
//

#include "OLGraph.h"

int FirstAdjVex(OLGraph G,int v){
    if(G.xlist[v].firstout){
        return G.xlist[v].firstout->tailvex;
    }else{
        return -1;
    }
}
