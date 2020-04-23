// 宏#define命令练习(2)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define PI  3.1415926
#define area(R) PI * R * R      //带参宏定义

int main(){
    double R = 2;
    printf("area = %f\n", area(R));
}