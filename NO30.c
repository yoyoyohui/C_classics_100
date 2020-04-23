// 一个5位数，判断它是不是回文数。
// 即12321是回文数，个位与万位相同，十位与千位相同。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    int ge;
    int shi;
    //int bai;
    int qian;
    int wan;
    printf("请输入一个五位数: ");
    scanf("%d", &num);

    ge = num % 10;
    shi = num % 100 / 10;
    qian = num / 1000 % 10;
    wan = num / 10000;

    if(ge == wan && shi == qian){
        printf("%d是回文\n", num);
    }
    else{
        printf("%d不是回文\n", num);
    }

}