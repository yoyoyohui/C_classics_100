// ��ӡ������ͼ�������Σ�
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

    /*����һ*/
    printf("����1:\n");
    for(i = 0; i <= 3; i++){            //ǰ����
        for(j = 0; j <= 2 - i; j++){
            printf(" ");
        }
        for(k = 0; k <= 2*i; k++){
            printf("*");
        }
        printf("\n");
    }

    for(i = 0; i <= 2; i++){            //������
        for(j = 0; j <= i; j++){
            printf(" ");
        }
        for(k = 0; k <= 4 - 2 * i; k++){
            printf("*");
        }
        printf("\n");
    }

    
    /*������*/
    printf("����2:\n");             //��Ҫ���ҹ���
    for(i = 1; i <= 7; i++){
        for(j = 1; j <= abs(4-i); j++){         //abs��ȡ����ֵ
            printf(" ");
        }
        for(k = 1; k <= 7 - 2 * abs(4 - i); k++){
            printf("*");
        }
        printf("\n");
    }

}