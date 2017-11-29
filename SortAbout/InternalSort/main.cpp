#include <iostream>
#include "SortAlgorithms/SqList.h"

using namespace std;

int main() {
    int k=1;
    while (k!=0){
        SqList L;
        int k=0;
        cout<<"1.直接插入排序  2.折半插入排序  3.快速排序  4.简单选择排序  5.堆排序  0.退出"<<endl;
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
            BInsertSort(L);
            cout<<"折半插入排序结果为：";
            PrintSqList(L);
        }else if(k==3){
            QuickSort(L);
            cout<<"快速排序结果为：";
            PrintSqList(L);
        }else if(k==4){
            SelectSort(L);
            cout<<"简单选择排序结果为：";
            PrintSqList(L);
        } else if(k==5){
            HeapSort(L);
            cout<<"堆排序结果为：";
            PrintSqList(L);
        }else {
            cout<<"该操作不存在";
        }
    }
    return 0;
}