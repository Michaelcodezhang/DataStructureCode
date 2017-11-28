//
// Created by michaelcode on 17-11-28.
//

#include "main.h"
int Binary(SSTable S,char key,int low,int high);

int Search_Bin(SSTable S,char key){
    int res=0;
    res=Binary(S,key,1,S.length);
    return res;
}

int Binary(SSTable S,char key,int low,int high){
    int mid;
    if(low>high)return ERROR;
    mid=(low+high+1)/2;
    if(EQ(key,S.elem[mid])){
        return mid;
    }else if(LT(key,S.elem[mid])){
        mid=Binary(S,key,low,mid-1);
    } else{
        mid=Binary(S,key,mid+1,high);
    }
    return mid;
}