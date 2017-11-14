//
// Created by michaelcode on 17-11-3.
//

#include <malloc.h>
#include "../main.h"
#include "String.h"

Status SubString(HString &Sub,HString S,int pos,int len){
    int i=0,j=0;
    if(pos<1||pos>S.length||len<0||len>(S.length-pos+1)){
        return ERROR;
    }
    if(!len){
        Sub.ch= nullptr;
        Sub.length=0;
    } else{
        Sub.ch=(char *)malloc(len*(sizeof(char)));
        for(i=0,j=pos-1;i<len;i++,j++){
            Sub.ch[i]=S.ch[j];
        }
        Sub.length=len;
    }
    return OK;
}