// Ҫ�����������������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j;
    for(i = 1; i <= 8; i++){
        if(i % 2 != 0){         //������
            for(j = 1; j <= 4; j++){
                printf("%c%c", 168, 128);   //����׸���
                printf("  ");               //����ڸ���
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
    //����2 i�� j��
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