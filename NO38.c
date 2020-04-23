// 求一个3*3矩阵对角线元素之和 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num[3][3];
    int i, j, sum = 0;
    printf("请输入九个数: ");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            scanf("%d", &num[i][j]);
        }
    }

    printf("输出矩阵如下:\n");
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    sum = num[0][0] + num[1][1] +num[2][2] + num[0][2] + num[2][0];
    printf("对角线和为: %d\n", sum);
}