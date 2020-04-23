// 画图，学用line画直线
// 要安装 easyX 库 在vscode上太麻烦 直接跳过
#include<stdio.h>
#include<graphic.h>
#include<conio.h>
// 此代码不能运行
int main(){
    initgraph(640, 480);
    line(160, 240, 480, 240);       //绘制(160, 240)与点(480, 240)之间的线
    line(320, 120, 320, 360);       //绘制(320, 120)与点(320, 360)之间的线
    getch();
    closegraph();
}