//
// Created by michaelcode on 17-11-1.
//

#include "../main.h"
#include "String.h"
#include <iostream>
using namespace std;

Status PrintString(HString S){
    int i=0;
    for(i=0;i<S.length;i++){
        cout<<S.ch[i];
    }
    cout<<endl;
    return OK;
}