// ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int letters = 0; 
    int spaces = 0;
    int digits = 0;
    int others = 0;
    char c;

    while((c = getchar()) != '\n'){     //��������о�һֱѭ������  Ҳ������ascill��  ����\n��10�� enter��13
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){   //Ҳ������ascill��
            letters++;
        }
        else if(c == ' '){
            spaces++;
        }
        else if(c >= '0' && c <= '9'){
            digits++;
        }
        else{
            others++;
        }
    }
    printf("letters = %d\nspaces = %d\ndigits = %d\nothers = %d\n", letters, spaces, digits, others);

}