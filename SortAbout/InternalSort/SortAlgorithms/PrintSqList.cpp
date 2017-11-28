//
// Created by michaelcode on 17-11-28.
//
#include <iostream>
#include "../main.h"
#include "SqList.h"
using namespace std;

Status PrintSqList(SqList L){
    int i=1;
    for(i=1;i<=L.length;i++){
        cout<<L.r[i]<<" ";
    }
    cout<<endl;
}