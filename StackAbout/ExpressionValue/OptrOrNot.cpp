//
// Created by michaelcode on 17-10-24.
//
#include <iostream>
#include "main.h"
using namespace std;
char OP2[7]={'+','-','*','/','(',')','#'};

bool OptrOrNot(char op){
    int i=1;
    for(i=0;i<7;i++){
        if(op==OP2[i]){
            return true;
        }
    }
    return false;
}