// 有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
// 求出这个数列的前20项之和。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 2, b = 1;       //a初始分子, b初始分母
    int i;
    int t;
    double sum = 0;

    for(i = 1; i <= 20; i++){
        sum = sum + (double)a/b;
        t = a;
        a = a + b;          //下一项分子为前一项分子分母之和    
        b = t;              //下一项分母为前一项的分子
    }
    printf("前20项的和为: %f\n", sum);
}