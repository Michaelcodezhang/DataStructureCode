//
// Created by michaelcode on 17-11-28.
//

#ifndef SEQUENTIALSEARCH_MAIN_H
#define SEQUENTIALSEARCH_MAIN_H

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a)<(b))
#define LQ(a,b) ((a)<=(b))
typedef int Status;

typedef struct {
    char *elem;
    int length;
}SSTable;

Status CreateSSTable(SSTable &S);
int Search_Seq(SSTable S,char key);
int Search_Bin(SSTable S,char key);

#endif //SEQUENTIALSEARCH_MAIN_H
