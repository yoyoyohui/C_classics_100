// ��һ���Ѿ��ź�������顣
// ������һ������Ҫ��ԭ���Ĺ��ɽ�������������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i;
    int j;
    int temp;
    int num[10] = {1, 2, 3, 6, 9, 10, 66, 88, 99};
    printf("������һ����: ");
    scanf("%d", &num[9]);               //�����һ����λ������Ƚϵ�ֵ

    for(i = 0; i < 9; i++){
        if(num[9] < num[i]){
            temp = num[9];
            for(j = 9; j > i; j--){
                num[j] = num[j-1];          //��λ
            }
            num[i] = temp;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}