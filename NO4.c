// 输入某年某月某日，判断某年是否闰年，判断这一天是这一年的第几天 周几？

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

    /*********判断第几天**********/
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
    sum += day;                         //一年中的第几天就是 这个月份之前的天数加上这个月的这一天

    if(year % 400==0 ||(year % 4 == 0 && year % 100 != 0)){     // 是闰年
        leap = 1;
    }
    else{
        leap = 0;
    }
    if(leap == 1 && month > 2){
         sum++;
    }

    if(leap == 1){
        printf("%d.%d.%d是闰年, 这天天数为%d ", year, month, day, sum);
    }
    else if(leap == 0){
        printf("%d.%d.%d不是闰年, 这天天数为%d ", year, month, day, sum);
    }

    /*******p判断周几*******/
    if(month==1 || month==2) {
        month += 12;
        year--;
    }

    int iWeek = (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400) % 7;

    switch(iWeek){       
    case 0: printf("星期一\n"); break;
    case 1: printf("星期二\n"); break;
    case 2: printf("星期三\n"); break;
    case 3: printf("星期四\n"); break;
    case 4: printf("星期五\n"); break;
    case 5: printf("星期六\n"); break;
    case 6: printf("星期日\n"); break;
    }


}