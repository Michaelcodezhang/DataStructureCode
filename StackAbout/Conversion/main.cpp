#include <iostream>
#include "main.h"
using namespace std;

int main() {
    SqStack S;
    int n=0,m=2,e=0;
    InitStack(S);
    cout<<"请输入要转换的数制（输入：8或2）："<<endl;
    cin>>m;
    cout<<"请输入您要转换的数字："<<endl;
    cin>>n;
    while (n!=0){
        Push(S,n%m);
        n/=m;
    }
    cout<<"转换后的数字为："<<endl;
    while(!StackEmpty(S)){
        Pop(S,e);
        cout<<e;
    }
    return 0;
}