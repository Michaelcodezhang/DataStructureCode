//
// Created by michaelcode on 17-11-14.
//

#include <iostream>
#include <search.h>
#include "../../Main_LevelOrder.h"
#include "../BiTree.h"

using namespace std;

Status PrintBiTree_pre(BiTree T){
    PreOrderTraverse(T,PrintElement);
    return OK;
}
