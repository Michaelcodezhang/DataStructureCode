//
// Created by michaelcode on 17-10-24.
//
#include "main.h"

char Operate(char a,char theta,char b) {
    switch(theta) {
        case '+': return a+b-'0';
        case '-': return a-b+'0';
        case '*': return (a-'0')*(b-'0')+'0';
        case '/': return (a-'0')/(b-'0')+'0';
    }
}

