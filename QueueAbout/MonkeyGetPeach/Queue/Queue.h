//
// Created by michaelcode on 17-10-25.
//

#ifndef JUDGEPALINDROMIC_QUEUE_H
#define JUDGEPALINDROMIC_QUEUE_H

#include "../main.h"

typedef struct Monkey{
    int Id;
    int PeachMon;
    struct Monkey *next;
}Mon,*mon;
typedef struct {
    Mon *front;
    Mon *rear;
}LinkQueue;

Status InitMonkey(LinkQueue &Q,int n);
Status EnQueue(LinkQueue &Q, int Id,int PeachMon);
int DeQueue(LinkQueue &Q);

#endif //JUDGEPALINDROMIC_QUEUE_H
