//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

double Productivity(void){
    printf("请分别输入总重、培养皿、原料的重量数据\n");
    double Total_Weight = 0;
    double Glass_Garden = 0;
    double Raw_Mmaterial = 0;
    double * a = &Total_Weight;
    double * b = &Glass_Garden;
    double * c = &Raw_Mmaterial;
    scanf("%lf %lf %lf",a,b,c);
    double f = (Total_Weight - Glass_Garden) / Raw_Mmaterial;
    printf("产率为：%lf\n",f);
}

void Thermogravimetric_Ratio(void){
    printf("请分别输入45℃、100℃、130℃、160℃、190℃的数据\n");
    double Forty_Five = 0;
    double Onehundred = 0;
    double one_hundred_thirty = 0;
    double one_hundred_sixty = 0;
    double one_hundred_ninty = 0;
    scanf("%lf %lf %lf %lf %lf",&Forty_Five,&Onehundred,&one_hundred_thirty,&one_hundred_sixty,&one_hundred_ninty);
    double a = Onehundred/Forty_Five;
    double b = one_hundred_thirty/Forty_Five;
    double c = one_hundred_sixty/Forty_Five;
    double d = one_hundred_ninty/Forty_Five;
    printf("百分比分别为：100,%lf,%lf,%lf,%lf\n",a,b,c,d);
}

void menu()
{
    printf("#################################\n");
    printf("#####1.产率    2.热重曲线百分比#####\n");
    printf("#################################\n");
}

int main()
{
    int d = 0;
    do{
        menu();
        printf("请进行选择》》》\n");
        scanf("%d",&d);
        switch(d){
            case 1:
                Productivity();
                break;
            case 2:
                Thermogravimetric_Ratio();
                break;
            default:
                printf("嗯？？？？\n");
                break;
        }
    }while(d);
}