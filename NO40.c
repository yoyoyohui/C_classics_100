// ��һ���������������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int i;
    int temp;
    // ����1 �ı����˳��
    printf("����1 �ı����˳��: ");
    for(i = 4; i >= 0; i--){
        printf("%d ", num[i]);
    }
    printf("\n");

    printf("����2 �ı�������˳��: ");
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