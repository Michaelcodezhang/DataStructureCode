#include <iostream>
#include "main.h"
using namespace std;

int main() {
    SqStack OPTR,OPND;
    char a='0',b='0',c='0',x='#',theta='#',res='0';
    InitStack(OPTR);
    Push(OPTR,'#');
    InitStack(OPND);
    c=getchar();
    while(c!='#'||GetTop(OPTR)!='#'){
        if(!OptrOrNot(c)){
            Push(OPND,c);
            c=getchar();
        }
        else{
            switch (Precede(GetTop(OPTR),c)){
                case '<':
                    Push(OPTR,c);
                    c=getchar();
                    break;
                case '=':
                    Pop(OPTR,x);
                    c=getchar();
                    break;
                case '>':
                    Pop(OPTR,theta);
                    Pop(OPND,b);
                    Pop(OPND,a);
                    Push(OPND,Operate(a,theta,b));
                    break;
            }
        }
    }
    res=GetTop(OPND);
    cout<<res;
    return 0;
}