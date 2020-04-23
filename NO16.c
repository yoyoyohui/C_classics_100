// ��������������m��n���������Լ������С��������
// ���Լ����ָ����������������Լ��������һ����
// ����:12��24
// 12��Լ���У�1��2��3��4��6��12
// 24��Լ���У�1��2��3��4��6��8��12��24��
// ���ǹ��е�Լ��Ϊ��1��2��3��4��6��12��
// ��12��24�����Լ��Ϊ12

// ��С�����������������������еı����������ǵĹ�������
// ���г�0������С��һ���������ͽ����⼸����������С��������
// ����:3��4
// 3�ı�����3��6��9��12��15��18��21��24������
// 4�ı�����4��8��12��16��20��24������
// ���ǹ��еı�����12��24������
// ��3��4����С������Ϊ12


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int num1;
    int num2;
    int a;
    int b;
    int temp;

    printf("����������������: ");
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){                //��֤�ڶ������ȵ�һ����С
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1;
    b = num2;
    while(b != 0){      //շ����, ֱ��bΪ0
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("����1:\n���Լ��: %d, ��С������: %d\n", a, num1*num2/a);
    printf("����2:\n���Լ��: %d, ��С������: %d\n", GCD(num1, num2), LCM(num1, num2));
}

// ����2
/*find the Greatest Common Divisor of 2 numbers, GCD���Լ��*/
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

/*find the Least Common Multiple of 2 numbers, ��С������*/
int LCM(int num1, int num2){       
    return (num1 * num2) / GCD(num1, num2);
}