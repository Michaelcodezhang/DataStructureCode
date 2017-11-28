#include <iostream>
#include "SearchBST/SearchBST.h"

using namespace std;

int main() {
    BiTree T= nullptr,p= nullptr;
    int n,e;
    cout<<"请输入二叉排序树元素的个数："<<endl;
    cin>>n;
    CreateBST(T,n);
    cout<<"请输入您要查找的元素："<<endl;
    cin>>e;
    if(SearchBST(T,e, nullptr,p)){
        cout<<"该元素存在."<<endl;
    }else{
        cout<<"该元素不存在."<<endl;
    }
    cout<<"请输入您要插入的元素：";
    cin>>e;
    InsertBST(T,e);
    cout<<"请输入您要查找的元素："<<endl;
    cin>>e;
    if(SearchBST(T,e, nullptr,p)){
        cout<<"该元素存在."<<endl;
    }else{
        cout<<"该元素不存在."<<endl;
    }
    cout<<"请输入您要删除的元素：";
    cin>>e;
    DeleteBST(T,e);
    cout<<"请输入您要查找的元素："<<endl;
    cin>>e;
    if(SearchBST(T,e, nullptr,p)){
        cout<<"该元素存在."<<endl;
    }else{
        cout<<"该元素不存在."<<endl;
    }
    return 0;
}