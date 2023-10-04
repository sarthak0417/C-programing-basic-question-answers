#include <stdio.h>
int main() 
{
    int num1, num2, gcd, lcm;
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
    int temp1 = num1;
    int temp2 = num2;
    while (temp2 != 0) 
    {
        int temp = temp2;
        temp2 = temp1 % temp2;
        temp1 = temp;
    }
    gcd = temp1;
    lcm = (num1 * num2) / gcd;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}