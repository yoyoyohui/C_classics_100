/*
企业发放的奖金根据利润提成。
利润(profit)低于或等于10万元时，奖金可提10%;
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%;
20万到40万之间时，高于20万元的部分，可提成5%;
40万到60万之间时高于40万元的部分，可提成3%;
60万到100万之间时，高于60万元的部分，可提成1.5%;
高于100万元时，超过100万元的部分按1%提成;
从键盘输入当月利润I，求应发放奖金总数？
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    double profit;
    double result, result1, result2, result4, result6, result10;
    printf("请输入利润: ");
    scanf("%lf", &profit);

    result1 = 100000 * 0.1;
    result2 = result1 + 100000 * 0.075;
    result4 = result2 + 200000 * 0.05;
    result6 = result4 + 200000 * 0.03;
    result10 = result6 + 400000 * 0.015;


    if(profit <= 100000){
        result = profit * 0.1;
    }
    else if(profit <= 200000){
        result = result1 + (profit - 100000) * 0.075;
    }
    else if(profit <= 400000){
        result = result2 + (profit - 200000) * 0.05;
    }
    else if(profit <= 600000){
        result = result4 + (profit - 400000) * 0.03;
    }
    else if(profit <= 1000000){
        result = result6 + (profit - 600000) * 0.015;
    }
    else{
        result = result10 + (profit - 1000000) * 0.01;
    }
                    
    printf("奖金为: %.3f\n", result);

}