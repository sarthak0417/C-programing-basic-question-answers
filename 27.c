#include <stdio.h>
int main() 
{
    int num1, num2, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0) 
    {
        num1 = -num1;
    }
    if (num2 < 0) 
    {
        num2 = -num2;
    }
    while (num2 != 0) 
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}