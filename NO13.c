// ��ӡ�����еġ�ˮ�ɻ�������
// ��ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, a, b, c, count = 0;
    for(i = 100; i <= 999; i++){

        a = i % 10;             //��λ
        b = (i % 100) / 10;     //ʮλ
        c = i / 100;            //��λ

        if(i == a*a*a+b*b*b+c*c*c){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("һ��%d��ˮ�ɻ���\n", count);
}