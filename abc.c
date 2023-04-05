#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define MAXSIZE 100

double Productivity(void){
    printf("��ֱ��������ء�������ԭ�ϵ���������\n");
    double Total_Weight = 0;
    double Glass_Garden = 0;
    double Raw_Mmaterial = 0;
    double * a = &Total_Weight;
    double * b = &Glass_Garden;
    double * c = &Raw_Mmaterial;
    scanf("%lf %lf %lf",a,b,c);
    double p = Total_Weight - Glass_Garden;
    double f = p / Raw_Mmaterial;
    printf("��������Ϊ��%.5lfg����Ϊ��%.5lf\n",p,f);
}

void Thermogravimetric_Ratio(void){
    printf("��ֱ�����45�桢100�桢130�桢160�桢190��������Լ������������\n");
    double Forty_Five = 0;
    double Onehundred = 0;
    double one_hundred_thirty = 0;
    double one_hundred_sixty = 0;
    double one_hundred_ninty = 0;
    double Glass_Garden = 0;
    scanf("%lf %lf %lf %lf %lf %lf",&Forty_Five,&Onehundred,&one_hundred_thirty,&one_hundred_sixty,&one_hundred_ninty,&Glass_Garden);
    double a = (Onehundred - Glass_Garden) / (Forty_Five - Glass_Garden);
    double b = (one_hundred_thirty - Glass_Garden) / (Forty_Five - Glass_Garden);
    double c = (one_hundred_sixty - Glass_Garden) / (Forty_Five - Glass_Garden);
    double d = (one_hundred_ninty - Glass_Garden) / (Forty_Five - Glass_Garden);
    printf("�ٷֱȷֱ�Ϊ��100, %lf , %lf , %lf , %lf\n",a,b,c,d);
}

void menu()
{
    printf("#################################\n");
    printf(" 1.��������������    2.�������߰ٷֱ� \n");
    printf("#################################\n");
}

int main()
{
    int d = 0;
    do{
        menu();
        printf("�����ѡ�񡷡���\n");
        scanf("%d",&d);
        switch(d){
            case 1:
                Productivity();
                break;
            case 2:
                Thermogravimetric_Ratio();
                break;
            default:
                printf("�ţ�������\n");
                break;
        }
    }while(d);
}