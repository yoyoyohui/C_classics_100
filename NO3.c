// һ��һ�����ڵ�������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣� 
// ����156+100 �� ����156+168

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i, j, k;

    int x;
    int y;
    
    // ����1
    for(i = 0; i <= 10000; i++){
        for(j = 0; j <= 100; j++){
            for(k = 0; k <= 100; k++){
                if(i+100 == j*j && i+168 == k*k){ 
                    printf("����1: %d\n", i);
                }
            }
        }
    }
    
    // ����2
    for(i = 0; i <= 10000; i++){
        x = sqrt(i + 100);
        y = sqrt(i + 168);
        if(x*x == i+100 && y*y == i+168){
            printf("����2: %d\n", i);
        }
    }
}