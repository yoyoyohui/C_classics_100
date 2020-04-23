// 将一个数组逆序输出。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int i;
    int temp;
    // 方法1 改变输出顺序
    printf("方法1 改变输出顺序: ");
    for(i = 4; i >= 0; i--){
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("方法2 改变数组存放顺序: ");
    for(i = 0; i < 5/2; i++){
        temp = num[i];
        num[i] = num[5-1-i];
        num[5-1-i] = temp;
    }
    for(i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    
}