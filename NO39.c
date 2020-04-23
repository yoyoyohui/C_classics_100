// 有一个已经排好序的数组。
// 现输入一个数，要求按原来的规律将它插入数组中

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i;
    int j;
    int temp;
    int num[10] = {1, 2, 3, 6, 9, 10, 66, 88, 99};
    printf("请输入一个数: ");
    scanf("%d", &num[9]);               //在最后一个空位输入待比较的值

    for(i = 0; i < 9; i++){
        if(num[9] < num[i]){
            temp = num[9];
            for(j = 9; j > i; j--){
                num[j] = num[j-1];          //移位
            }
            num[i] = temp;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}