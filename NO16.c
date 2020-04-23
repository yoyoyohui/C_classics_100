// 输入两个正整数m和n，求其最大公约数和最小公倍数。
// 最大公约数：指两个或多个整数共有约数中最大的一个。
// 例如:12和24
// 12的约数有：1、2、3、4、6、12
// 24的约数有：1、2、3、4、6、8、12、24。
// 它们共有的约数为：1、2、3、4、6、12，
// 则12和24的最大公约数为12

// 最小公倍数：两个或多个整数公有的倍数叫做它们的公倍数，
// 其中除0以外最小的一个公倍数就叫做这几个整数的最小公倍数。
// 例如:3和4
// 3的倍数有3、6、9、12、15、18、21、24……；
// 4的倍数有4、8、12、16、20、24……。
// 它们公有的倍数有12、24……，
// 则3和4的最小公倍数为12


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num1;
    int num2;
    int a;
    int b;
    int temp;

    printf("请输入两个正整数: ");
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){                //保证第二个数比第一个数小
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1;
    b = num2;
    while(b != 0){      //辗除法, 直到b为0
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("方法1:\n最大公约数: %d, 最小公倍数: %d\n", a, num1*num2/a);
    printf("方法2:\n最大公约数: %d, 最小公倍数: %d\n", GCD(num1, num2), LCM(num1, num2));
}

// 方法2
/*find the Greatest Common Divisor of 2 numbers, GCD最大公约数*/
int GCD(int num1, int num2){       
    
    while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            num1 = num1 % num2; //num1 > num2, divide num1 by num2 and get the remainder
        }
        else{
            num2 = num2 % num1; //num2 > num1, divide num1 by num2 and get the remainder
        }
    }
    if(num1 == 0){
        return num2;       //num2 is the GCD
    }
    else{
        return num1;       //num1 is the GCD
    }
}

/*find the Least Common Multiple of 2 numbers, 最小公倍数*/
int LCM(int num1, int num2){       
    return (num1 * num2) / GCD(num1, num2);
}