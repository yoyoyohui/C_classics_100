// 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    int i;
    printf("请输入一个正整数: ");
    scanf("%d", &num);
    printf("%d =", num);

    for(i = 2; i <= num; i++){
        while(num != i){
            if(num % i == 0){       //判断i是否为因子, 是就进入，否则跳出while，执行i++
                printf(" %d ×", i);
                num = num / i;
            }
            else{
                break;
            }
        }
    }
    printf(" %d", num);
}