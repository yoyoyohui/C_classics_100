// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下
// 求它在第10次落地时, 一共经过多少米， 第十次反弹多高;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    double sum = 100;
    double high = sum / 2;
    int i;
    for(i = 2; i <= 10; i++){
        sum = sum + high * 2;       //总路程
        high = high / 2;            //第十次反弹高度
    }
    printf("十次落地一共经过%f米，第十次反弹%f\n", sum, high);
}