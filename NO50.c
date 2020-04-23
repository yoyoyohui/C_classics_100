// ＃include 的应用练习
// 自制头文件

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<50_PI.h>           //放到include文件夹里面  C:\MinGW\include

int main(){
    double R = 2;
    printf("PI = %f\n", PI);
    printf("%f\n", PI * R * R);
}

