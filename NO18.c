// 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
// 例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a;
    int num;
    long sum = 0;
    long temp = 0;
    int i;
    printf("请输入a值(1~9): ");
    scanf("%d", &a);
    printf("请输入多少个相加: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        temp = temp + a;        // 2,22,222.....
        sum = sum + temp;       //总和
        a = a * 10;             //2,20,200.....
    }
    printf("sum = a + aa + aaa + aaaa..... =%ld\n", sum);







}