#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the first number:\n");
  scanf("%d",&a);
  printf("Enter the second number:\n");
  scanf("%d",&b);
  printf("The numbers before swapping:\n num1=%d\n num2:%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("The numbers after swapping:\n num1=%d\n num2=%d",a,b);
  return 0;
 }
