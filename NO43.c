// ѧϰʹ��static����һ�÷�
// ��֪���˴���ʲô����

// staticȫ�ֱ�������ͨ��ȫ�ֱ���
// staticȫ�ֱ���ֻ��ʹ��һ�Σ������������ڸñ�����Դ�ļ�����Ч����ֹ�������ļ���Ԫ�б�����

// static�ֲ���������ͨ�ֲ�����
// static�ֲ�����ֻ����ʼ��һ�Σ���һ��������һ�ν��ֵ

// static��������ͨ����
// static�������ڴ���ֻ��һ�ݣ���ͨ������ÿ����������ά��һ�ݿ���

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int number = 1;      //ȫ�ֱ���

extern int func();
void main(){
    printf("%d", func());
}