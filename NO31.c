// ���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ���
// �����һ����ĸһ����������жϵڶ�����ĸ��

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char c;
    printf("����������ĸ:");
    switch (c = getchar())
    {
    case 'M': printf("����һ\n"); break;
    
    case 'T': {
        printf("����������һ����ĸ:");
        fflush(stdin);                  //��������������Ļس�, ���ӻ����һ�ε���Ϊ�������,�������
        if((c = getchar()) == 'u'){
            printf("���ڶ�");
        }
        else if(c == 'h'){
            printf("������\n");
        }
        else{
            printf("�������\n");
        } 
    }break;

    case 'W': printf("������\n"); break;

    case 'F': printf("������\n"); break;

    case 'S': {
        printf("����������һ����ĸ:");
        fflush(stdin);                  //��������������Ļس�, ���ӻ����һ�ε���Ϊ�������,�������
        if((c = getchar()) == 'a'){
            printf("������");
        }
        else if(c == 'u'){
            printf("������\n");
        }
        else{
            printf("�������\n");
        } 
    }break;

    default: printf("�������\n"); break;

    }
}