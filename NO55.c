// ѧϰʹ�ð�λȡ��~��

#include<stdio.h>

int main(){
    unsigned char num;              // char ռ 1Byte = 8 bit        
    num = 240;                      // 1111 0000
    printf("ȡ��֮ǰ %d\n", num);
    num = ~num;                     // 0000 1111
    printf("ȡ��֮�� %d\n", num);
}