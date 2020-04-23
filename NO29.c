// 给一个不多于5位的正整数，
// 要求：一、求它是几位数，二、逆序打印出各位数字。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num, a, count;
    printf("输入一个不多于5位的正整数: ");
    scanf("%d", &num);
    a = num / 10;

    for(count = 1; a != 0; count++){
        a = a / 10;                 //直到a=0
    }
    printf("这个数是%d位数\n", count);

    printf("逆序打印位: ");

    for(a = 1; a <= count; a++){
        printf("%d ", num % 10);    //从后开始打印一位
        num = num / 10;             //从后开始去掉一位    
    }
}