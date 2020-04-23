// 一个数如果恰好等于它的因子之和，这个数就称为“完数”。
// 例如 6 = 1＋2＋3. 编程找出1000以内的所有完数。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j, sum = 0;
    for(i = 1; i <= 1000; i++){
        for(j = 1; j < i; j++){         //不同于找素数, 不能用j < 根号√i
            if(i % j == 0){
                sum = sum + j;          //所有因子和
            }
        }
        if(sum == i){
            printf("%d ", i);
        }
        sum = 0;
    }

}