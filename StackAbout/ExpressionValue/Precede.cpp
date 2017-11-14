//
// Created by michaelcode on 17-10-24.
//
#include "main.h"
char OP[7]={'+','-','*','/','(',')','#'};
char precede[7][7]={
        '>','>','<','<','<','>','>',
        '>','>','<','<','<','>','>',
        '>','>','>','>','<','>','>',
        '>','>','>','>','<','>','>',
        '<','<','<','<','<','=',0,
        '>','>','>','>',0,'>','>',
        '<','<','<','<','<',0,'='};

char Precede(char op,char c) {
    int pos_op;
    int pos_c;
    int i;
    for (i=0;i<7;i++) {
        if(op==OP[i]) pos_op=i;
        if(c==OP[i]) pos_c=i;
    }
    return(precede[pos_op][pos_c]);
}
