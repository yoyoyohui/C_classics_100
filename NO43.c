// 学习使用static的另一用法
// 不知道此代码什么问题

// static全局变量与普通的全局变量
// static全局变量只初使化一次，作用域被限制在该变量的源文件内有效，防止在其他文件单元中被引用

// static局部变量和普通局部变量
// static局部变量只被初始化一次，下一次依据上一次结果值

// static函数与普通函数
// static函数在内存中只有一份，普通函数在每个被调用中维持一份拷贝

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int number = 1;      //全局变量

extern int func();
void main(){
    printf("%d", func());
}