#include<stdio.h>
int main(){
    int n1,n2,sum=0;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number");
    scanf("%d",&n2);
    int i=n1;
    while(i<=n2)
    {
            sum=sum+i;
            i=i+1;
    }
    printf("%d",sum);
    return 0;
}