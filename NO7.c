// �������ͼ��(�Լ�����)������c����������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char a = 32, b = 33;          //����ascill��
    printf("%c%c%c%c%c\n", b, a, a, a, b);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", a, a, b, a, a);
    printf("%c%c%c%c%c\n", a, b, a, b, a);
    printf("%c%c%c%c%c\n", b, a, a, a, b);

}
