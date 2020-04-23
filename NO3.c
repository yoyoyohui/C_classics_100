// 一个一万以内的整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？ 
// 根号156+100 和 根号156+168

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    int i, j, k;

    int x;
    int y;
    
    // 方法1
    for(i = 0; i <= 10000; i++){
        for(j = 0; j <= 100; j++){
            for(k = 0; k <= 100; k++){
                if(i+100 == j*j && i+168 == k*k){ 
                    printf("方法1: %d\n", i);
                }
            }
        }
    }
    
    // 方法2
    for(i = 0; i <= 10000; i++){
        x = sqrt(i + 100);
        y = sqrt(i + 168);
        if(x*x == i+100 && y*y == i+168){
            printf("方法2: %d\n", i);
        }
    }
}