// ���������������Ƕ������ɴ��⣺
// ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
// 60-89��֮�����B��ʾ��
// 60�����µ���C��ʾ��

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int score;
    char grade;
    printf("������һ���ɼ�: ");
    scanf("%d", &score);

    grade = (score >= 90?'A':(score >= 60?'B':'C'));
    printf("%d����%c�ȼ�\n", score, grade);
    
}