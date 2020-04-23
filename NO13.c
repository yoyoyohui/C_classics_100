// 打印出所有的“水仙花数”，
// 所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, a, b, c, count = 0;
    for(i = 100; i <= 999; i++){

        a = i % 10;             //个位
        b = (i % 100) / 10;     //十位
        c = i / 100;            //百位

        if(i == a*a*a+b*b*b+c*c*c){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("一共%d个水仙花数\n", count);
}