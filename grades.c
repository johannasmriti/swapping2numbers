#include<stdio.h>
int main()
{
 int grade;
 printf("Enter marks:");
 scanf("%d",&grade);
 if(grade>=85)
 {
  printf("Grade A");
 }
 else if ((grade>=70) && (grade<85))  
 {
  printf("Grade B");
 }
 else if ((grade<70) && (grade>=55))
 {
  printf("Grade C");
 }
 else if((grade>=40) && (grade<55))
 {
  printf("Grade D");
 }
 else
 { 
   printf("Grade F");
 }
}
