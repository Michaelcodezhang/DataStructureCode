#include <iostream>
#include "main.h"
#include "String/String.h"
using namespace std;


int main() {
    char s[100],t[100],v[100];
    cout<<"初始化一个字符串S："<<endl;
    cin>>s;
    cout<<"请输入您要进行替换的子串："<<endl;
    cin>>t;
    cout<<"您想要将子串替换成："<<endl;
    cin>>v;
    HString S,T,V;
    StrAssign(S,s);
    StrAssign(T,t);
    StrAssign(V,v);
    RePlace(S,T,V);
    cout<<"替换后的字符串为："<<endl;
    PrintString(S);
    return 0;
}