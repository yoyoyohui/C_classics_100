// ��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...
// ���������е�ǰ20��֮�͡�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a = 2, b = 1;       //a��ʼ����, b��ʼ��ĸ
    int i;
    int t;
    double sum = 0;

    for(i = 1; i <= 20; i++){
        sum = sum + (double)a/b;
        t = a;
        a = a + b;          //��һ�����Ϊǰһ����ӷ�ĸ֮��    
        b = t;              //��һ���ĸΪǰһ��ķ���
    }
    printf("ǰ20��ĺ�Ϊ: %f\n", sum);
}