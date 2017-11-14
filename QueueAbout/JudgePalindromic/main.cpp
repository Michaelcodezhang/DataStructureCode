#include <iostream>
#include <string.h>
#include "main.h"
#include "./Stack/Stack.h"
#include "./Queue/Queue.h"

using namespace std;

int main() {
    char c,e,q,s;
    int i=1,count=0;
    bool k=true;
    LinkQueue Q;
    SqStack S;
    InitQueue(Q);
    InitStack(S);
    c=getchar();
    EnQueue(Q,c);
    while(c!='@'){
        c=getchar();
        EnQueue(Q,c);
        count++;
    }
    if(count%2==0){
        for(i=1;i<=count/2;i++){
            e=DeQueue(Q);
            Push(S,e);
        }
        for(i=1;i<=count/2;i++){
            q=DeQueue(Q);
            s=Pop(S);
            if(q!=s){
                k= false;
                break;
            }
        }
    }
    else{
        for(i=1;i<=(count-1)/2;i++){
            e=DeQueue(Q);
            Push(S,e);
        }
        DeQueue(Q);
        for(i=1;i<=(count-1)/2;i++){
            q=DeQueue(Q);
            s=Pop(S);
            if(q!=s){
                k= false;
                break;
            }
        }
    }
    if(k){
        cout<<"Good，您输入的字符串是回文"<<endl;
    }
    else{
        cout<<"Sorry,您输入的字符串不是回文"<<endl;
    }
    return 0;
}