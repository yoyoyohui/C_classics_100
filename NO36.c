// ��100���ڵ�����
// �����ֳ�������
// һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ�������������������������Ϊ������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i;
    int j;
    int flag = 0;       //���������Ϊ0
    printf("100���ڵ�����Ϊ: ");
    for(i = 2; i <= 100; i++){
        for(j = 2; j <= sqrt(i); j++){  //������
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", i);
        }
        flag = 0;
    }
    printf("\n");
}