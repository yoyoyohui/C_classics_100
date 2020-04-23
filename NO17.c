// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int letters = 0; 
    int spaces = 0;
    int digits = 0;
    int others = 0;
    char c;

    while((c = getchar()) != '\n'){     //如果不换行就一直循环计算  也可以是ascill码  换行\n是10， enter是13
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){   //也可以用ascill码
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