#include<stdio.h>
int main()
{
 int n;
 printf("Choose a number between 1-5: ");
 scanf("%d",&n);
 switch(n)
 {
  case 1: printf("Food item: Pizza\nPrice: rs.239\n");
   break;
  case 2: printf("Food item: Burger\nPrice: rs.129\n");
   break;
  case 3: printf("Food item: Pasta\nPrice: rs.179\n");
   break;
  case 4: printf("Food item: French Fries\nPrice: rs.99\n");
   break;
  case 5: printf("Food item: Sandwich\nPrice: rs.149\n");
   break;
  default: printf("Invalid option!\n");
 }
 return 0;
}
  
