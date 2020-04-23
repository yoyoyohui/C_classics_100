// 找100以内的素数
// 质数又称素数。
// 一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i;
    int j;
    int flag = 0;       //所有数标记为0
    printf("100以内的素数为: ");
    for(i = 2; i <= 100; i++){
        for(j = 2; j <= sqrt(i); j++){  //找因数
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", i);
        }
        flag = 0;
    }
    printf("\n");
}