// �ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//         С���ӳ����������º�ÿ��������һ�����ӣ�
//         �������Ӷ���������ÿ���µ���������Ϊ���٣�
//         (쳲���������)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 1, b = 1, i;
    /* ǰ20��쳲���������*/
    for(i = 1; i <= 10; i++){
        printf("%d %d ", a, b);
        a = a + b;
        b = b + a;
    }
    printf("\n");
}