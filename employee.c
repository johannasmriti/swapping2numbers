#include <stdio.h>
#include <stdlib.h>


struct employee
{
        int age,no,salary;
        char name[25];
};
int main()
{
    struct employee emp[20];
    for(int i=0;i<20;i++)
    {
        printf("Enter the employee's name,age,phone no and salary\n");
        scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].no,&emp[i].salary);
    }
    printf("Name\tAge\tPhone number\tsalary\n");
    for(int i=0;i<20;i++)
    {
        printf("%s\t %d\t %d\t %d\n",emp[i].name,emp[i].age,emp[i].no,emp[i].salary);
    }
}
