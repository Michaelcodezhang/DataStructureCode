//
// Created by michaelcode on 17-11-21.
//

#include "OLGraph.h"

int LocateVex(OLGraph G,char v){
    int i=0;
    for(i=0;i<G.vexnum;i++){
        if(v==G.xlist[i].data){
            return i;
        }
    }
}