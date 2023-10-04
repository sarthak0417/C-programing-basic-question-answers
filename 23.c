#include <stdio.h>
#include <math.h>
int main() 
{
    int num, originalNum, r, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    for (originalNum = num; originalNum != 0; ++n) 
    {
        originalNum /= 10;
    }
    originalNum = num;
    while (originalNum != 0) 
    {
        r = originalNum % 10;
        result += pow(r, n);
        originalNum /= 10;
    }
    if ((int)result == num) 
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}