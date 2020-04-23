// 求1+2!+3!+...+20!的和

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    long long sum = 0;
    long long t = 1;
    int i;

    for(i = 1; i <= 20; i++){
        t *= i;                 //每一项等于前一项乘以项数，3! = 2!× 3
        sum = sum + t;
    }
    printf("1+2!+3!+...+20! = %lld", sum);

}