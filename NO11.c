// 古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//         小兔子长到第三个月后每个月又生一对兔子，
//         假如兔子都不死，问每个月的兔子总数为多少？
//         (斐波那契数列)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 1, b = 1, i;
    /* 前20项斐波那契数列*/
    for(i = 1; i <= 10; i++){
        printf("%d %d ", a, b);
        a = a + b;
        b = b + a;
    }
    printf("\n");
}