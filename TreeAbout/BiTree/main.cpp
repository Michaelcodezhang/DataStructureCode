#include <iostream>
#include "BiTree/BiTree.h"

using namespace std;

int main() {
    BiTree T;
    int n;
    cout<<"请按照前序序列输入字符，以建立二叉树："<<endl;
    CreateBiTree(T);
    cout<<"前序遍历序列为：";
    PrintBiTree_pre(T);
    cout<<endl;
    cout<<"中序遍历序列为：";
    PrintBiTree_in(T);
    cout<<endl;
    cout<<"后序遍历序列为：";
    PrintBiTree_post(T);
    cout<<endl;
    cout<<"层序遍历序列为：";
    LeverOrderTraverse(T);
    cout<<endl;
    n=LeafNumber_pre(T);
    cout<<"树的叶子结点数目为："<<n<<endl;
    return 0;
}