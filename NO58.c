// 画图，学用rectangle画方形
#include<stdio.h>
#include<graphic.h>
#include<conio.h>
// 此代码不能运行
int main(){
    initgraph(640, 480);
    rectangle(160, 120, 480, 360);       //绘制(160, 120)与点(480, 360)为对角线作矩阵
    getch();
    closegraph();
}