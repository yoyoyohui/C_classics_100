// 请输入星期几的第一个字母来判断一下是星期几，
// 如果第一个字母一样，则继续判断第二个字母。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char c;
    printf("请输入首字母:");
    switch (c = getchar())
    {
    case 'M': printf("星期一\n"); break;
    
    case 'T': {
        printf("请再输入下一个字母:");
        fflush(stdin);                  //用于清除缓存区的回车, 不加会把上一次的作为这次输入,输出错误
        if((c = getchar()) == 'u'){
            printf("星期二");
        }
        else if(c == 'h'){
            printf("星期四\n");
        }
        else{
            printf("输出错误\n");
        } 
    }break;

    case 'W': printf("星期三\n"); break;

    case 'F': printf("星期五\n"); break;

    case 'S': {
        printf("请再输入下一个字母:");
        fflush(stdin);                  //用于清除缓存区的回车, 不加会把上一次的作为这次输入,输出错误
        if((c = getchar()) == 'a'){
            printf("星期六");
        }
        else if(c == 'u'){
            printf("星期日\n");
        }
        else{
            printf("输出错误\n");
        } 
    }break;

    default: printf("输入错误\n"); break;

    }
}