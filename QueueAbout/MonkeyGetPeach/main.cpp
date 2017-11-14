#include <iostream>
#include "./main.h"
#include "./Queue/Queue.h"
using namespace std;

int main() {
    LinkQueue Q;
    InitMonkey(Q,10);
    int id;
    for(int i=1;i<=10;i++){
        id=DeQueue(Q);
        cout<<id<<" ";
    }
    cout<<endl;
    return 0;
}