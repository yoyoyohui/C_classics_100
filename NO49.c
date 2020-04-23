// #if #ifdef和#ifndef的综合应用
// 都是预编译指令
// #if是条件编译语句，在编译阶段执行，如果后面跟的条件成立，就编译对应的语句。
// #ifdef是条件编译语句，在编译阶段执行，后面跟一个宏的名称，如果这个宏已经定义了，就编译对应的语句。
// #ifndef是条件编译语句，在编译阶段执行，后面跟一个宏的名称，如果这个宏没有定义，就编译对应的语句。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a, b)   a>b?a:b

int main(){
    int a = 2;
    int b = 1;

    #if(1)
        printf("1: %d\n", MAX(a, b));
    #endif

    #if(0)
        printf("2: %d\n", MAX(a, b));
    #endif

    #ifdef MAX(a, b)
        printf("3: %d\n", MAX(a, b));
    #else
        printf("4: not define\n");
    #endif

    #ifndef MIN(a, b)
        printf("5: not define\n");
    #else
        printf("6: %d\n", MIN(a, b));
    #endif

    #define MIN(a, b)   a<b?a:b

    #ifndef MIN(a, b)
        printf("7 not define\n");
    #else
        printf("8: %d\n", MIN(a, b));
    #endif
}