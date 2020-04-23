// 学习使用按位或 |   0|0=0; 0|1=1; 1|0=1; 1|1=1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 66;             // 01000010?
    int b = 88;             // ?01011000?          
    printf("%d\n", a|b);    // 01000010 ?| ?01011000? = ?01011010?(?90?)  
}