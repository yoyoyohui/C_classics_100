// ������������x,y,z, �������������С�������

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i;
    int j;
    int k;
    int num[3];

    int temp;
    printf("������������: ");
    for(k = 0; k < 3; k++){
        scanf("%d", &num[k]);
    }

    for(i = 0; i < 3-1; i++){
        for(j = 0; j < 3-1-i; j++){
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d ", num[i]);
    }

}