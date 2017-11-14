//
// Created by michaelcode on 17-11-1.
//

#include <malloc.h>
#include "../main.h"
#include "String.h"

Status ClearString(HString &S){
    if(!S.length){
        return ERROR;
    }
    free(S.ch);
    S.ch= nullptr;
    S.length=0;
    return OK;
}