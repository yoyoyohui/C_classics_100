// ȡһ������a���Ҷ˿�ʼ��4��7λ
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*�˴���������*/
void main(){
    int num;
    //unsigned int tmp;
    printf("������һ������: ");
    scanf("%d", &num);
    num = num >> 4;         (1)��ʹnum����4λ��
    num = num & 15;         (2)����һ����4λȫΪ1,����ȫΪ0����������~(~0<<4) = (15)10 = (0000 0000 1111)2
                            (3)��������߽���&���㡣

    printf("%d\n", num);
}