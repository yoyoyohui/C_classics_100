// ����ĳ��ĳ��ĳ�գ��ж�ĳ���Ƿ����꣬�ж���һ������һ��ĵڼ��� �ܼ���

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int year;
    int month;
    int day;
    int sum = 0;
    int leap;

    printf("input year: ");
    scanf("%d", &year);
    printf("input month: ");
    scanf("%d", &month);
    printf("input day: ");
    scanf("%d", &day);

    /*********�жϵڼ���**********/
    switch(month){
    case 1: sum = 0; break;
    case 2: sum = 31; break;
    case 3: sum = 59; break;
    case 4: sum = 90; break;
    case 5: sum = 120; break;
    case 6: sum = 151; break;
    case 7: sum = 181; break;
    case 8: sum = 212; break;
    case 9: sum = 243; break;
    case 10: sum = 273; break;
    case 11: sum = 304; break;
    case 12: sum = 334; break;
    default: printf("data error\n");
    }
    sum += day;                         //һ���еĵڼ������ ����·�֮ǰ��������������µ���һ��

    if(year % 400==0 ||(year % 4 == 0 && year % 100 != 0)){     // ������
        leap = 1;
    }
    else{
        leap = 0;
    }
    if(leap == 1 && month > 2){
         sum++;
    }

    if(leap == 1){
        printf("%d.%d.%d������, ��������Ϊ%d ", year, month, day, sum);
    }
    else if(leap == 0){
        printf("%d.%d.%d��������, ��������Ϊ%d ", year, month, day, sum);
    }

    /*******p�ж��ܼ�*******/
    if(month==1 || month==2) {
        month += 12;
        year--;
    }

    int iWeek = (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400) % 7;

    switch(iWeek){       
    case 0: printf("����һ\n"); break;
    case 1: printf("���ڶ�\n"); break;
    case 2: printf("������\n"); break;
    case 3: printf("������\n"); break;
    case 4: printf("������\n"); break;
    case 5: printf("������\n"); break;
    case 6: printf("������\n"); break;
    }


}