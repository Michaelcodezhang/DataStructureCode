//
// Created by michaelcode on 17-11-14.
//

#include <iostream>
#include "../../Main_LevelOrder.h"
#include "../BiTree.h"

using namespace std;

Status PrintBiTree_in(BiTree T){
    InOrderTraverse(T,PrintElement);
    return OK;
}
