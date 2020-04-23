// 有5个人坐在一起，
// 问第五个人多少岁？他说比第四个人大2岁。
// 问第四个人岁数，他说比第三个人大2岁。
// 问第三个人，又说比第二人大2岁。
// 问第二个人，说比第一个人大2岁。
// 最后问第一个人，他说是10岁。
// 请问第五个人多大？

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("第五个人%d岁\n", f(5));
}

int f(int n){
    int age;
    if(n == 1){
        age = 10;
    }
    else{
        age = f(n - 1) + 2;
    }
    return age;
}