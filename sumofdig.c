#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,j,digit;
    printf("Input number:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("Sum of digits: %d",sum);
}
