// 画图，学用circle画圆形。
// 要安装 easyX 库 在vscode上太麻烦 直接跳过
#include<stdio.h>
#include<graphic.h>
#include<conio.h>
// 此代码不能运行
int main(){
    initgraph(640, 480);
    circle(320, 240, 100);
    getch();
    closegraph();
}