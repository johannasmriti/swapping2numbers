#include <stdio.h>
#include <stdlib.h>
int mat(int (*a)[3])
{
    printf("The matrix is: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int sum(int (*a)[3])
{
    int i,j,sum=0,sum1=0;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if(i+j==2)
            {
                sum1=sum1+a[i][j];
                printf("%d ",a[i][j]);
            }
        }
    }
    printf("sum of the first diagonal: %d\n",sum);
    printf("sum of the second diagonal: %d\n",sum1);
}
int main()
{
    int a[3][3],i,j;
    printf("Input elements in the matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-[%d],[%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    mat(a);
    sum(a);
}
