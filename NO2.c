/*
��ҵ���ŵĽ������������ɡ�
����(profit)���ڻ����10��Ԫʱ���������10%;
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%;
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%;
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%;
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%;
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%���;
�Ӽ������뵱������I����Ӧ���Ž���������
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    double profit;
    double result, result1, result2, result4, result6, result10;
    printf("����������: ");
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
                    
    printf("����Ϊ: %.3f\n", result);

}