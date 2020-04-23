// #if #ifdef��#ifndef���ۺ�Ӧ��
// ����Ԥ����ָ��
// #if������������䣬�ڱ���׶�ִ�У����������������������ͱ����Ӧ����䡣
// #ifdef������������䣬�ڱ���׶�ִ�У������һ��������ƣ����������Ѿ������ˣ��ͱ����Ӧ����䡣
// #ifndef������������䣬�ڱ���׶�ִ�У������һ��������ƣ���������û�ж��壬�ͱ����Ӧ����䡣

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