//
// Created by michaelcode on 17-10-30.
//

#include <iostream>
#include "../main.h"
#include "Queue.h"
using namespace std;

Status PrintQueue(LinkQueue Q){
    mon p=Q.front->next;
    while(p!=Q.rear){
        cout<<p->Id<<"号猴子(桃子数量："<<p->PeachMon<<")  ";
        p=p->next;
    }
    p=Q.rear;
    cout<<p->Id<<"号猴子(桃子数量："<<p->PeachMon<<")  ";
    cout<<endl;
    return OK;
}