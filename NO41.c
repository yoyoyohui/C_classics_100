// ѧϰstatic���徲̬�������÷�

// staticȫ�ֱ�������ͨ��ȫ�ֱ���
// staticȫ�ֱ���ֻ��ʹ��һ�Σ������������ڸñ�����Դ�ļ�����Ч����ֹ�������ļ���Ԫ�б�����

// static�ֲ���������ͨ�ֲ�����
// static�ֲ�����ֻ����ʼ��һ�Σ���һ��������һ�ν��ֵ

// static��������ͨ����
// static�������ڴ���ֻ��һ�ݣ���ͨ������ÿ����������ά��һ�ݿ���

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i;
    for(i = 0; i <= 2; i++){
        func();
    }
}

int func(){
    static int a = 0;       //��ִ��һ��,�´η��ʴ˺������ٵ���int a
    int b = 0;
    printf("��̬����a = %d ��̬����b = %d\n", a, b);
    a++;
    b++;

}