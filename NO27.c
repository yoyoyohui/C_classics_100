// ���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("������5���ַ�: ");
    f(5);
    printf("\n");
}

void f(int i){
    char n;
    if(i == 1){
        n = getchar();  //getchar()�򻺴�����
        putchar(n);     //���
    }
    else{
        n = getchar();
        f(i - 1);
        putchar(n);
    }
}