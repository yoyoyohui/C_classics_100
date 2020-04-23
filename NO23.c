// 打印出如下图案（菱形）
//    *   
//   ***  
//  ***** 
// *******
//  ***** 
//   ***  
//    *   

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int i;
    int j;
    int k;

    /*方法一*/
    printf("方法1:\n");
    for(i = 0; i <= 3; i++){            //前四行
        for(j = 0; j <= 2 - i; j++){
            printf(" ");
        }
        for(k = 0; k <= 2*i; k++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 0; i <= 2; i++){            //后三行
        for(j = 0; j <= i; j++){
            printf(" ");
        }
        for(k = 0; k <= 4 - 2 * i; k++){
            printf("*");
        }
        printf("\n");
    }

    
    /*方法二*/
    printf("方法2:\n");             //主要是找规律
    for(i = 1; i <= 7; i++){
        for(j = 1; j <= abs(4-i); j++){         //abs是取绝对值
            printf(" ");
        }
        for(k = 1; k <= 7 - 2 * abs(4 - i); k++){
            printf("*");
        }
        printf("\n");
    }

}