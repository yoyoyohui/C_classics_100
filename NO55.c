// 学习使用按位取反~。

#include<stdio.h>

int main(){
    unsigned char num;              // char 占 1Byte = 8 bit        
    num = 240;                      // 1111 0000
    printf("取反之前 %d\n", num);
    num = ~num;                     // 0000 1111
    printf("取反之后 %d\n", num);
}