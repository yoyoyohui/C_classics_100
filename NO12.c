// �ж�101-200֮���ж��ٸ����������������������
// �����ֳ�������
// һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ�������������������������Ϊ������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i;
    int num;
    int count = 0;
    int flag = 0;
    for(num = 101; num <= 200; num+=2){     //ż��һ����������, ������Ϊ2�Ƚϸ�Ч
        for(i = 2; i <= sqrt(num); i++){
            if(num % i == 0){               //������ ������ �����
                flag = 1;
                break;                      //�������Ч��
            }
        }
        if(flag != 1){                      //δ�����, ����, ���
            printf("%d ", num);
            count++;
        }
        flag = 0;               //�´�ѭ��ǰ����   
    }
    printf("\n");
    printf("һ��%d������\n", count);
}