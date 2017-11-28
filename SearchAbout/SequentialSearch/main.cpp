#include <iostream>
#include "main.h"

using namespace std;

int main() {
    int i=0,type=0,res=0,sub;
    SSTable S;
    char key;
    CreateSSTable(S);
    cout<<"顺序表已成功建立！"<<endl;
    cout<<"请选择接下来的操作(1、查找|2、退出)：";
    cin>>sub;
    while(sub==1){
        cout<<"请选择您要进行查找的关键字："<<endl;
        cin>>key;
        cout<<"查找类型：1、顺序查找   2、折半查找（仅限于有序表使用）"<<endl<<"请选择查找类型（1 or 2）：";
        cin>>type;
        if(type==1){
            res=Search_Seq(S,key);
            if(res==0){
                cout<<"未找到此关键字"<<endl;
            }else{
                cout<<"关键字位置为："<<res<<endl;
            }
        }else{
            res=Search_Bin(S,key);
            if(res==0){
                cout<<"未找到此关键字"<<endl;
            }else{
                cout<<"关键字位置为："<<res<<endl;
            }
        }
        cout<<"请选择接下来的操作(1、查找|2、退出)：";
        cin>>sub;
    }
    return 0;
}