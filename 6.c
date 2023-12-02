#include<stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    int totalmarks, percentage;
    printf("enter subject1 marks");
    scanf("%d", &s1);
    printf("enter subject2 marks");
    scanf("%d", &s2);
    printf("enter subject3 marks");
    scanf("%d", &s3);
    printf("enter subject4 marks");
    scanf("%d", &s4);
    printf("enter subject5 marks");
    scanf("%d", &s5);
    totalmarks = s1+s2+s3+s4+s5;
    percentage = (totalmarks*100)/500;
    printf("PERCENTAGE AQQUIRED : %d\n", percentage);
    return 0;
}