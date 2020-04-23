// 收到输入10个数，进行大到小排序

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num[10];
    int temp;
    int i;
    int j;
    printf("请输入10个数: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\n大到小排序为: ");
    for(i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}