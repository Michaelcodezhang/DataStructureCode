//
// Created by michaelcode on 17-11-15.
//

#ifndef ADJACENCYLIST_ADJACENCYLIST_H
#define ADJACENCYLIST_ADJACENCYLIST_H

#define MAX_VERTEX 20
typedef struct ArcNode{
    int ajvex;
    struct ArcNode *nextarc;
    int *info;
}ArcNode;
typedef struct VNode{
    char data;
    ArcNode *firstarc;
}VNode,AdjList[MAX_VERTEX];
typedef struct {
    AdjList vertices;
    int vexnum,arcnum;
    int kind;
}ALGraph;


#endif //ADJACENCYLIST_ADJACENCYLIST_H
