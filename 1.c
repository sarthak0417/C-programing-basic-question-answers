#include<stdio.h>
int main()
{
    float a, c;
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("The area is = %f\nThe circumference is %f", a, c);
}