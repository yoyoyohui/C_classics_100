// һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻������
// �����ڵ�10�����ʱ, һ�����������ף� ��ʮ�η������;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    double sum = 100;
    double high = sum / 2;
    int i;
    for(i = 2; i <= 10; i++){
        sum = sum + high * 2;       //��·��
        high = high / 2;            //��ʮ�η����߶�
    }
    printf("ʮ�����һ������%f�ף���ʮ�η���%f\n", sum, high);
}