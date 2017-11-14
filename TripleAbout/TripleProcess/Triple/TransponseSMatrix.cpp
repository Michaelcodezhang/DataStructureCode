//
// Created by michaelcode on 17-11-8.
//

#include "../main.h"
#include "Triple.h"

Status TransposeSMatrix(TSMatrix M,TSMatrix &T){
    int col=0,p=0,q=1;
    T.mu=M.nu;
    T.nu=M.mu;
    T.tu=M.tu;
    if(T.tu){
        for(col=1;col<=M.nu;col++){
            for(p=1;p<=M.tu;p++){
                if(col==M.data[p].j){
                    T.data[q].i=M.data[p].j;
                    T.data[q].j=M.data[p].i;
                    T.data[q].e=M.data[q].e;
                    q++;
                }
            }
        }
    }
    q++;
    return OK;
}