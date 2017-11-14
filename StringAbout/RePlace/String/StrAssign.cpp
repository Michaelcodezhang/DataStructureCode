//
// Created by michaelcode on 17-11-1.
//
#include <iostream>
#include "malloc.h"
#include "../main.h"
#include "String.h"
using namespace std;

Status StrAssign(HString &T,char *chars){
    int i=0;
    char *c;
//未知bug：free（T.ch）提示Signal: SIGSEGV (Segmentation fault)
//    if(&T.ch){
//        free(T.ch);
//    }
    for(i=0,c=chars;*c;++i,++c);
    if(!i){
        T.ch= nullptr;
        T.length=0;
    } else{
        T.ch=(char *)malloc(i*sizeof(char));
        if(!T.ch){
            return OVERFLOW;
        }
        T.length=i;
        for(i=0;i<T.length;i++){
            T.ch[i]=chars[i];
        }
    }
    return OK;
}