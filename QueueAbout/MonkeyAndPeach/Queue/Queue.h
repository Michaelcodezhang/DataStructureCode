//
// Created by michaelcode on 17-10-30.
//

#ifndef MONKEYANDPEACH_QUEUE_H_H
#define MONKEYANDPEACH_QUEUE_H_H

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
Status KeepQueue(LinkQueue &Q);
bool QueueEmpty(LinkQueue Q);
int GetId(LinkQueue Q);
int GetPeachMon(LinkQueue Q);
Status AddPeachMon(LinkQueue &Q,int add);
Status PrintQueue(LinkQueue Q);

#endif //MONKEYANDPEACH_QUEUE_H_H
