//
// Created by michaelcode on 17-11-21.
//

#ifndef ORTHOGONALLIST_QUEUE_H
#define ORTHOGONALLIST_QUEUE_H

#include "../main.h"

typedef struct QNode{
    int data;
    struct QNode *next;
}QNode,*QueuePtr;
typedef struct {
    QNode *front;
    QNode *rear;
}LinkQueue;

Status InitQueue(LinkQueue &Q);
Status EnQueue(LinkQueue &Q,int e);
int DeQueue(LinkQueue &Q);
Status QueueEmpty(LinkQueue Q);

#endif //ORTHOGONALLIST_QUEUE_H
