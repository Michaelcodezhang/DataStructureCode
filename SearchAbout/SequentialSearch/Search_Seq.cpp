//
// Created by michaelcode on 17-11-28.
//

#include "main.h"

int Search_Seq(SSTable S,char key){
    int i;
    S.elem[0]=key;
    for(i=S.length;!EQ(S.elem[i],key);i--);
    return i;
}