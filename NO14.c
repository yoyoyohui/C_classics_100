// ��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num;
    int i;
    printf("������һ��������: ");
    scanf("%d", &num);
    printf("%d =", num);

    for(i = 2; i <= num; i++){
        while(num != i){
            if(num % i == 0){       //�ж�i�Ƿ�Ϊ����, �Ǿͽ��룬��������while��ִ��i++
                printf(" %d ��", i);
                num = num / i;
            }
            else{
                break;
            }
        }
    }
    printf(" %d", num);
}