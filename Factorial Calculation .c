//*Factorial Calculation*: Write a program that calculates the factorial of a number using a loop (for, while, or do-while).
#include<stdio.h>
int main()
{
int number,fact=1;
printf("Enter the number :");
scanf("%d",&number);

for(int i=1;i<=number;i++)
{
  fact=fact*i;
}

printf("factorial of %d = %d",number,fact);

return 0;

}
