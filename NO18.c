// ��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
// ����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a;
    int num;
    long sum = 0;
    long temp = 0;
    int i;
    printf("������aֵ(1~9): ");
    scanf("%d", &a);
    printf("��������ٸ����: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        temp = temp + a;        // 2,22,222.....
        sum = sum + temp;       //�ܺ�
        a = a * 10;             //2,20,200.....
    }
    printf("sum = a + aa + aaa + aaaa..... =%ld\n", sum);







}