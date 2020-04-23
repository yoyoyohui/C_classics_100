// 学习使用extern的用法。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    extern int a;           //在a定义之前使用得先用extern声明
    printf("%d\n", a);
}

int a = 1;              //定义全局变量a