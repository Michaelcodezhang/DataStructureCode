//
// Created by michaelcode on 17-11-3.
//

#include "String.h"
#include <iostream>
using namespace std;

void get_next(HString T,int *next){
    int i=1,j=0;
    next[1]=0;
    while(i<T.length){
        if(j==0||T.ch[i-1]==T.ch[j-1]){
            i++;
            j++;
            next[i]=j;
        } else{
            j=next[j];
        }
    }
}

int Index_KMP(HString S,HString T,int pos){
    int i=pos,j=1;
    int next[T.length+1];
    get_next(T,next);
    while(i<=S.length&&j<=T.length){
        if(j==0||S.ch[i-1]==T.ch[j-1]){
            i++;
            j++;
        }else{
            j=next[j];
        }
    }
    if(j>T.length){
        return i-T.length;
    }
    return 0;
}