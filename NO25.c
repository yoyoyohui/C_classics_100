// ��1+2!+3!+...+20!�ĺ�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    long long sum = 0;
    long long t = 1;
    int i;

    for(i = 1; i <= 20; i++){
        t *= i;                 //ÿһ�����ǰһ�����������3! = 2!�� 3
        sum = sum + t;
    }
    printf("1+2!+3!+...+20! = %lld", sum);

}