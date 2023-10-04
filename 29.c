#include <stdio.h>
int main() 
{
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int originalNum = num;
    for (; num != 0; num /= 10) 
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }
    printf("Reversed number of %d is: %d\n", originalNum, reversedNum);
    return 0;
}