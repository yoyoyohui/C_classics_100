// ���õݹ鷽����5!

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    printf("5! = %d\n", f(5));
}

int f(int num){
    int sum;
    if(num == 1){           //�˳�����
        sum = 1;
    }
    else{
        sum = num * f(num - 1);
    }
    return sum;
}