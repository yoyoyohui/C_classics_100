// һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
// ���� 6 = 1��2��3. ����ҳ�1000���ڵ�����������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j, sum = 0;
    for(i = 1; i <= 1000; i++){
        for(j = 1; j < i; j++){         //��ͬ��������, ������j < ���š�i
            if(i % j == 0){
                sum = sum + j;          //�������Ӻ�
            }
        }
        if(sum == i){
            printf("%d ", i);
        }
        sum = 0;
    }

}