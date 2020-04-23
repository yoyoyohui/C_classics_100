// 练习函数调用

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    f1();               //调用无参无返回函数
    num = f2(1, 2);         //调用有参有返回函数
    printf("这是有参有返回函数的返回值: %d\n", num);
}

void f1(){
    printf("这是无参无返回函数的输出\n");
}

int f2(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}