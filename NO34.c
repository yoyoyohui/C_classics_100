// ��ϰ��������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    f1();               //�����޲��޷��غ���
    num = f2(1, 2);         //�����в��з��غ���
    printf("�����в��з��غ����ķ���ֵ: %d\n", num);
}

void f1(){
    printf("�����޲��޷��غ��������\n");
}

int f2(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}