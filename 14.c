#include <stdio.h>
int main() 
{
    double num1, num2, num3;
    printf("Enter three numbers separated by spaces: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the greatest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf is the greatest number.\n", num2);
    } else {
        printf("%.2lf is the greatest number.\n", num3);
    }
    return 0;
}