#include <iostream>
#include "main.h"
#include "./Queue/Queue.h"
using namespace std;

int main() {
    int n,k,m,i=0,basket=0,sum=0,peachmon=0,id=0,c=0;
    char j='n';
    cin>>n>>k>>m;
    cout<<"您是否要查看每次分桃子前猴子队列状况？(输入y/n)"<<endl;
    cin>>j;
    LinkQueue Q;
    InitMonkey(Q,n);
    while(!QueueEmpty(Q)){
        for(i=1;i<=k;i++){
            if(QueueEmpty(Q)){
                break;
            }
            basket+=i;
            peachmon=GetPeachMon(Q);
            sum=basket+peachmon;
            if(j=='y'||j=='Y'){
                c++;
                cout<<"第"<<c<<"次(篮子里桃子数："<<basket<<")：";
                PrintQueue(Q);
            }
            if(sum<m){
                AddPeachMon(Q,basket);
                KeepQueue(Q);
                basket=0;
            }
            else{
                id=GetId(Q);
                cout<<id<<"号猴子出队"<<endl;
                DeQueue(Q);
                basket=sum-m;
            }
        }
    }
    return 0;
}