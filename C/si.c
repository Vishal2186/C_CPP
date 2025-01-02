#include<stdio.h>
int main(){
float rate ,intrest ,principal,time;
printf("Enter the principal ammount: ");
scanf("%f",&principal);
printf("Enter the rate per month: ");
scanf("%f",&rate);
printf("Enter the time in monthes: ");
scanf("%f",&time);
intrest = (principal*rate*time)/100;
printf("Simpel intrest = %f",intrest);
return 0;}