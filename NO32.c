// Press any key to change color, do you want to try it. Please hurry up!

#include<stdio.h>    
#include<windows.h>         //����SetConsoleTextAttribute����
#include<conio.h>           //����getch����, ������conio.h Ҳ��
int main(){
    int color;
    for(color = 0; color <= 15; color++){       //15��
        printf("��������ı���ɫ\n");
        getch();            //�����������������
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
}
