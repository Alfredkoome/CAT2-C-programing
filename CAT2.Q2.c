/*
 NAME:Alfred Koome
 ADM:CT101/G/26551/25
 DESCRIPTION:CAT2.Q2
 */
#include<stdio.h>
int main() {
    float hours,rate,grosspay,taxes,netpay;
    printf("Enter the hours worked in a week : ");
    scanf("%f",&hours);
    printf("Enter hourly wage : ");
 scanf("%f",&rate);

 if (hours>40){
  grospay=40*rate+(hours-40)*rate*1.5;
 }else {
  grosspay=hours*rate
 }
 if (grosspay<=600){
  taxes=0.15*grosspay;
 }else{
  taxes=0.15*600+0.20*(grosspay-600);
 }
 netpay=grosspay-taxes;
 printf("grosspay:$%.2f\n",grosspay);
 printf("taxes:$%.2f\n",taxes);
 printf("net pay:$%.2f\n",netpay);
    return 0;
}

