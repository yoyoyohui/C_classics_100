// һ��5λ�����ж����ǲ��ǻ�������
// ��12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    int ge;
    int shi;
    //int bai;
    int qian;
    int wan;
    printf("������һ����λ��: ");
    scanf("%d", &num);

    ge = num % 10;
    shi = num % 100 / 10;
    qian = num / 1000 % 10;
    wan = num / 10000;

    if(ge == wan && shi == qian){
        printf("%d�ǻ���\n", num);
    }
    else{
        printf("%d���ǻ���\n", num);
    }

}