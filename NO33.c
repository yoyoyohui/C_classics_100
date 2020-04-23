// 学习gotoxy()与clrscr()函数

#include<stdio.h>
#include<stdlib.h>          //调用system("CLS");
#include<windows.h>         //调用SetConsoleCursorPosition函数
#include<conio.h>           //调用getch函数, 不调用conio.h 也行

int main(){
    gotoxy(3, 4);
    printf("i am here\n");
    gotoxy(6, 7);
    printf("按任意键清屏幕\n");
    getch();            //任意获取输入
    system("CLS");      //情况屏幕
}

void gotoxy(int x, int y){
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}