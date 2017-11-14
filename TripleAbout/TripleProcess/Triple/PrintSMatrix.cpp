//
// Created by michaelcode on 17-11-8.
//
#include <iostream>
#include "../main.h"
#include "Triple.h"
using namespace std;

Status PrintSMatrix(TSMatrix M){
    int p=1,q=1,m=1;
    int data[M.mu+1][M.nu+1];
    for(p=1;p<=M.mu;p++){
        for(q=1;q<=M.nu;q++){
            if(M.data[m].i==p&&M.data[m].j==q){
                data[p][q]=M.data[m].e;
                m++;
            }else{
                data[p][q]=0;
            }
        }
    }
    p++;
    for(p=1;p<=M.mu;p++){
        for(q=1;q<=M.nu;q++){
            cout<<data[p][q]<<" ";
        }
        cout<<endl;
    }
    return OK;
}