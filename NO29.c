// ��һ��������5λ����������
// Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num, a, count;
    printf("����һ��������5λ��������: ");
    scanf("%d", &num);
    a = num / 10;

    for(count = 1; a != 0; count++){
        a = a / 10;                 //ֱ��a=0
    }
    printf("�������%dλ��\n", count);

    printf("�����ӡλ: ");

    for(a = 1; a <= count; a++){
        printf("%d ", num % 10);    //�Ӻ�ʼ��ӡһλ
        num = num / 10;             //�Ӻ�ʼȥ��һλ    
    }
}