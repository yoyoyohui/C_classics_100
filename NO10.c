// ��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц���� 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j;
    printf("^_^------^_^\n");
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= i; j++){
            printf("%c%c", 168, 128);
        }
        printf("\n");
    }
}