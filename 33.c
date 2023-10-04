#include <stdio.h>
#include <math.h> 
int main()
{
    double n1, n2, result=0;
    char op;
    printf("enter first number: ");
    scanf("%lf", &n1);
    printf("enter operator (+, -, *, /, %%):" );
    scanf(" %c", &op);
    printf("enter second number: ");
    scanf("%lf", &n2);
        switch(op)
        {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 !=0){
            result = n1 / n2;
            }else{
                printf("error:division by zero\n");
                 }
            break;
        case '%':
            if (n2 !=0){
            result = fmod(n1, n2);
            }else{
                printf("error:modulus by zero\n");
                 }
            break;
         default:
         printf("invalid input\n");
    }
    printf("result : %lf\n", result);
    return 0;
}