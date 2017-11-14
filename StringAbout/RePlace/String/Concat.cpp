//
// Created by michaelcode on 17-11-1.
//

#include <malloc.h>
#include "../main.h"
#include "String.h"

Status Concat(HString &T,HString S1,HString S2){
    int i=0,j=0;
//未知bug：free（T.ch）提示Signal: SIGSEGV (Segmentation fault)
//    if(&T.ch){
//        free(T.ch);
//    }
    T.ch=(char *)malloc((S1.length+S2.length)*(sizeof(char)));
    if(!T.ch){
        return OVERFLOW;
    }
    for(i=0;i<S1.length;i++){
        T.ch[i]=S1.ch[i];
    }
    T.length=S1.length+S2.length;
    for(i=S1.length,j=0;i<T.length;i++,j++){
        T.ch[i]=S2.ch[j];
    }
    return OK;
}