// ��ͼ��ѧ��line��ֱ��
// Ҫ��װ easyX �� ��vscode��̫�鷳 ֱ������
#include<stdio.h>
#include<graphic.h>
#include<conio.h>
// �˴��벻������
int main(){
    initgraph(640, 480);
    line(160, 240, 480, 240);       //����(160, 240)���(480, 240)֮�����
    line(320, 120, 320, 360);       //����(320, 120)���(320, 360)֮�����
    getch();
    closegraph();
}