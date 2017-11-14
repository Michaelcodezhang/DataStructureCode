//
// Created by michaelcode on 17-11-1.
//

#include "String.h"

int StrCompare(HString S, HString T){
    int i=0;
    for(i=0;i<S.length&&i<T.length;i++){
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}
