// �ı���ɫ����

#include<stdio.h>    
#include<windows.h>         //����SetConsoleTextAttribute����

int main(){
    int color;
    printf("������0-15\n");
    scanf("%d", &color);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    printf("��ɫ�Ѹı�\n");
}