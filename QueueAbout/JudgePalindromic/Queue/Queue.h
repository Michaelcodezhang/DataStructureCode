//
// Created by michaelcode on 17-10-25.
//

#ifndef JUDGEPALINDROMIC_QUEUE_H
#define JUDGEPALINDROMIC_QUEUE_H

#include "../main.h"

typedef struct QNode{
    char data;
    struct QNode *next;
}QNode,*QueuePtr;
typedef struct {
    QNode *front;
    QNode *rear;
}LinkQueue;

Status InitQueue(LinkQueue &Q);
Status EnQueue(LinkQueue &Q,char e);
char DeQueue(LinkQueue &Q);

#endif //JUDGEPALINDROMIC_QUEUE_H
