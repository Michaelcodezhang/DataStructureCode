//
// Created by michaelcode on 17-11-28.
//

#ifndef INTERNALSORT_SQLIST_H
#define INTERNALSORT_SQLIST_H

#include "../main.h"

#define MAXSIZE 20
typedef int KeyType;

typedef struct {
    KeyType r[MAXSIZE+1];
    int length;
}SqList;

Status CreateSqList(SqList &L);
Status PrintSqList(SqList L);
Status InsertSort(SqList &L);
Status SelectSort(SqList &L);
Status HeapSort(SqList &H);

#endif //INTERNALSORT_SQLIST_H
