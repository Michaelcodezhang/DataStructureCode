//
// Created by michaelcode on 17-11-3.
//

#include "main.h"
#include "String/String.h"

Status RePlace(HString &S,HString T,HString V){
    int index=Index_KMP(S,T,1),len1,len2,len3;
    HString S1,S3,Temp;
    len1=index-1;
    len2=T.length;
    len3=S.length-index-len2+1;
    SubString(S1,S,1,len1);
    SubString(S3,S,index+len2,len3);
    Concat(Temp,S1,V);
    Concat(S,Temp,S3);
    return OK;
}
