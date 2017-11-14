#include <iostream>
#include "main.h"
#include "Triple/Triple.h"
using namespace std;

int main() {
    TSMatrix M1,M2,S;
    TSMatrix T1,T2;
    CreateSMatrix(M1);
    cout<<"M1矩阵："<<endl;
    PrintSMatrix(M1);
    CreateSMatrix(M2);
    cout<<"M2矩阵："<<endl;
    PrintSMatrix(M2);
    AddSMatrix(M1,M2,S);
    cout<<"S(和)矩阵："<<endl;
    PrintSMatrix(S);
    TransposeSMatrix(M1,T1);
    cout<<"M1的转置矩阵为："<<endl;
    PrintSMatrix(T1);
    TransposeSMatrix(M2,T2);
    cout<<"M2的转置矩阵为："<<endl;
    PrintSMatrix(T2);
    return 0;
}