//
// Created by michaelcode on 17-11-8.
//
#include <iostream>
#include "../main.h"
#include "Triple.h"
using namespace std;

Status AddSMatrix(TSMatrix M1,TSMatrix M2,TSMatrix &S){
    if(!(M1.mu==M2.mu&&M1.nu==M2.nu)){
        return ERROR;
    }
    int m1[M1.mu+1][M1.nu+1],m2[M2.mu+1][M2.nu+1],p=1,q=1,r=1,s=1,k=0;
    S.mu=M1.mu;
    S.nu=M1.nu;
    for(p=1;p<=M1.mu;p++){
        for(q=1;q<=M1.nu;q++){
            for(r=1;r<=M1.tu;r++){
                if(M1.data[r].i==p&&M1.data[r].j==q){
                    m1[p][q]=M1.data[r].e;
                    break;
                }else{
                    m1[p][q]=0;
                }
            }
            for(r=1;r<=M2.tu;r++){
                if(M2.data[r].i==p&&M2.data[r].j==q){
                    m2[p][q]=M2.data[r].e;
                    break;
                }else{
                    m2[p][q]=0;
                }
            }
        }
    }
    for(p=1;p<=M1.mu;p++){
        for(q=1;q<=M1.nu;q++){
            m1[p][q]+=m2[p][q];
        }
    }
    for(p=1;p<=M1.mu;p++){
        for(q=1;q<=M1.nu;q++){
            if(m1[p][q]!=0){
                S.data[s].i=p;
                S.data[s].j=q;
                S.data[s].e=m1[p][q];
                k++;
                s++;
            }
        }
    }
    S.tu=k;
    cout<<k;
    return OK;
}