// ѧϰgotoxy()��clrscr()����

#include<stdio.h>
#include<stdlib.h>          //����system("CLS");
#include<windows.h>         //����SetConsoleCursorPosition����
#include<conio.h>           //����getch����, ������conio.h Ҳ��

int main(){
    gotoxy(3, 4);
    printf("i am here\n");
    gotoxy(6, 7);
    printf("�����������Ļ\n");
    getch();            //�����ȡ����
    system("CLS");      //�����Ļ
}

void gotoxy(int x, int y){
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}