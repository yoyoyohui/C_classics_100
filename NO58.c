// ��ͼ��ѧ��rectangle������
#include<stdio.h>
#include<graphic.h>
#include<conio.h>
// �˴��벻������
int main(){
    initgraph(640, 480);
    rectangle(160, 120, 480, 360);       //����(160, 120)���(480, 360)Ϊ�Խ���������
    getch();
    closegraph();
}