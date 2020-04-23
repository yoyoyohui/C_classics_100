// 学习static定义静态变量的用法

// static全局变量与普通的全局变量
// static全局变量只初使化一次，作用域被限制在该变量的源文件内有效，防止在其他文件单元中被引用

// static局部变量和普通局部变量
// static局部变量只被初始化一次，下一次依据上一次结果值

// static函数与普通函数
// static函数在内存中只有一份，普通函数在每个被调用中维持一份拷贝

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i;
    for(i = 0; i <= 2; i++){
        func();
    }
}

int func(){
    static int a = 0;       //就执行一次,下次访问此函数不再调用int a
    int b = 0;
    printf("静态变量a = %d 动态变量b = %d\n", a, b);
    a++;
    b++;

}