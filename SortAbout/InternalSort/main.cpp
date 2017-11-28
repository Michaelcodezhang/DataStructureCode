#include <iostream>
#include "SortAlgorithms/SqList.h"

using namespace std;

int main() {
    int k=1;
    while (k!=0){
        SqList L;
        int k=0;
        cout<<"1.直接插入排序  2.简单选择排序  3.堆排序  0.退出"<<endl;
        cout<<"请选择您要执行的操作（输入序号）：";
        cin>>k;
        if(k==0){
            break;
        }
        CreateSqList(L);
        cout<<"初始序列为：";
        PrintSqList(L);
        if(k==1){
            InsertSort(L);
            cout<<"直接插入排序结果为：";
            PrintSqList(L);
        }else if(k==2){
            SelectSort(L);
            cout<<"简单选择排序结果为：";
            PrintSqList(L);
        } else{
            HeapSort(L);
            cout<<"简单选择排序结果为：";
            PrintSqList(L);
        }
    }
    return 0;
}