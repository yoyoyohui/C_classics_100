// 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("请输入5个字符: ");
    f(5);
    printf("\n");
}

void f(int i){
    char n;
    if(i == 1){
        n = getchar();  //getchar()向缓存输入
        putchar(n);     //输出
    }
    else{
        n = getchar();
        f(i - 1);
        putchar(n);
    }
}