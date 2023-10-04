#include <stdio.h>
int main() 
{
    int n, first = 0, second = 1, next, i = 2;
    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);
    if (n == 1) 
    {
        printf("Fibonacci Series: %d\n", first);
    }
    else if (n >= 2) 
    {
        printf("Fibonacci Series: %d, %d, ", first, second);
        do
        {
            next = first + second;
            printf("%d", next);

            if (i < n - 1) 
            {
                printf(", ");
            }
            first = second;
            second = next;
            i++;
        } 
        while (i < n);
        printf("\n");
    }
    else 
    {
        printf("Invalid input. Please enter a positive integer greater than or equal to 1.\n");
    }
    return 0;
}