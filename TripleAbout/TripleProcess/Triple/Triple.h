//
// Created by michaelcode on 17-11-8.
//

#ifndef TRIPLEPROCESS_TRIPLE_H
#define TRIPLEPROCESS_TRIPLE_H

#define MAXSIZE 12500
typedef struct {
    int i,j;
    int e;
}Triple;
typedef struct {
    Triple data[MAXSIZE+1];
    int mu,nu,tu;
}TSMatrix;

Status CreateSMatrix(TSMatrix &M);
Status TransposeSMatrix(TSMatrix M,TSMatrix &T);
Status PrintSMatrix(TSMatrix M);
Status AddSMatrix(TSMatrix M1,TSMatrix M2,TSMatrix &S);

#endif //TRIPLEPROCESS_TRIPLE_H
