// 要求输出国际象棋棋盘

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j;
    for(i = 1; i <= 8; i++){
        if(i % 2 != 0){         //奇数行
            for(j = 1; j <= 4; j++){
                printf("%c%c", 168, 128);   //输出白格子
                printf("  ");               //输出黑格子
            }
        }
        else{
            for(j = 1; j <= 4; j++){
                printf("  ");
                printf("%c%c", 168, 128);
            }
        }
        printf("\n");
    }

    printf("\n");
    //方法2 i行 j列
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            if((i+j) % 2 == 0){
                printf("%c%c", 168, 128);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }


}