#include<stdio.h>
int main()
{
  int a;
  printf("enter your age");
  scanf("%d",&a);
  if(a<18)
  {
    printf("not eligible for voting");
  }
  else
  {
  printf("you are eligible for voting");
  }
}