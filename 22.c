#include <stdio.h>
int main() 
{
    int num, rev = 0, r;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (; num != 0; num /= 10) 
    {
        r = num % 10;
        rev = rev * 10 + r;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}