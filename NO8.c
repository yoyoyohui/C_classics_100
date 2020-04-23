// ¾Å¾Å³Ë·¨±í

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, j;
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= i; j++){
            printf("%d ¡Á %d =%2d  ", j, i, i*j);
        }
        printf("\n");
    }
}