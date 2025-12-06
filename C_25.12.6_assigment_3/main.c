#include <stdio.h>

//纯数组实现，不简洁，很臃肿，待优化
int main(){
    printf("please input the two dates:");
    int year,month1,day1,year2,month2,day2;
    scanf("%d %d %d %d %d",&year,&month1,&day1,&month2,&day2);

    int year_type;
    if (year%4==0 && year%100!=0 || year%400==0 || year%100==0 && year%400!=0){
        year_type = 1;
    }
    else{
        year_type = 2;
    }

    int mon1[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int mon2[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int temp_day_1=0;
    if(year_type == 1){
        temp_day_1 = mon1[month1]-day1;   
    }
     else{
        temp_day_1 = mon2[month1]-day1;
    }

    int temp_day_2=0;
    if(year_type == 1){
        temp_day_2 = mon1[month2]-day2;
    }
    else{
        temp_day_2 = mon2[month2]-day2;
    }

    int temp_day_3=0;
    if(year_type == 1){
        for(int i=month1+1;i<month2-1;i++){
            temp_day_3 += mon1[i];
        }
    }
    else{
        for(int i=month1+1;i<month2-1;i++){
            temp_day_3 += mon2[i];
        }
    }
    
    int final_gap = temp_day_1 + temp_day_2 + temp_day_3;
    printf("%d",final_gap);
}