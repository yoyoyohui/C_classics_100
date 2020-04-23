// 取一个整数a从右端开始的4～7位
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*此代码有问题*/
void main(){
    int num;
    //unsigned int tmp;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    num = num >> 4;         (1)先使num右移4位。
    num = num & 15;         (2)设置一个低4位全为1,其余全为0的数。可用~(~0<<4) = (15)10 = (0000 0000 1111)2
                            (3)将上面二者进行&运算。

    printf("%d\n", num);
}