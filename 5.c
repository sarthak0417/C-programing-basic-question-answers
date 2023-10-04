#include<stdio.h>
int main()
{
    float p,r,t,si ;
    printf("enter the principle value ");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("the value of si is %f",si);
}