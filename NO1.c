// ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    int i, j, k;
    int num = 0;
    for(i = 1; i < 5; i++){
        for(j = 1; j < 5; j++){
            for(k = 1; k < 5; k++){
                if(i!=j && i!=k && j!=k){    // ÿ��λ�ò��ظ�
                    num++;
                    printf("%d: %d%d%d\n",num, i, j, k);
                }
            }
        }
    }
}