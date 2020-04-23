// 判断101-200之间有多少个素数，并输出所有素数。
// 质数又称素数。
// 一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i;
    int num;
    int count = 0;
    int flag = 0;
    for(num = 101; num <= 200; num+=2){     //偶数一定不是质数, 步长设为2比较高效
        for(i = 2; i <= sqrt(num); i++){
            if(num % i == 0){               //被整除 非质数 做标记
                flag = 1;
                break;                      //跳出提高效率
            }
        }
        if(flag != 1){                      //未被标记, 质数, 输出
            printf("%d ", num);
            count++;
        }
        flag = 0;               //下次循环前重组   
    }
    printf("\n");
    printf("一共%d个素数\n", count);
}