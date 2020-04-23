// 学习使用auto定义变量的用法

// 在C或者以前的C++中，auto关键字基本上可以被无视：
// 比如这个局部变量：int a = 100；auto int a = 100；并没有什么区别。

// auto是C语言的一个关键字，关键字主要用于声明变量的生存期为自动，
// 即将不在任何类、结构、枚举、联合和函数中定义的变量视为全局变量，而在函数中定义的变量视为局部变量。
// 这个关键字不怎么多写，因为所有的变量默认就是auto的。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 0;
    int i;
    for(i = 1; i <= 3; i++){
        printf("%d ", a);
        a++;
        {
            auto int b = 0;     //变量b只在{}里存在，每次结束循环都消失，auto可省略
            printf("%d\n", b);
            b++;
        }
    }
}