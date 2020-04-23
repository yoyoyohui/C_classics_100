// 文本颜色设置

#include<stdio.h>    
#include<windows.h>         //调用SetConsoleTextAttribute函数

int main(){
    int color;
    printf("请输入0-15\n");
    scanf("%d", &color);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    printf("颜色已改变\n");
}