// Press any key to change color, do you want to try it. Please hurry up!

#include<stdio.h>    
#include<windows.h>         //调用SetConsoleTextAttribute函数
#include<conio.h>           //调用getch函数, 不调用conio.h 也许
int main(){
    int color;
    for(color = 0; color <= 15; color++){       //15次
        printf("按任意键改变颜色\n");
        getch();            //按下任意键结束函数
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
}
