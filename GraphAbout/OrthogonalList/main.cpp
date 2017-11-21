#include <iostream>
#include "OLGraph/OLGraph.h"

using namespace std;

int main() {
    OLGraph G;
    CreateDG(G);
    cout<<"深度优先搜寻序列为：";
    DFSTraverse(G);
    cout<<endl;
    cout<<"广度优先搜索序列为：";
    BFSTraverse(G);
    cout<<endl;
    return 0;
}