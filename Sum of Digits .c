//*Sum of Digits*: Create a program that calculates the sum of the digits of a given integer using a loop.
#include<stdio.h>
int main()
{

int number;
int sum_of_digit=0;
printf("Enter number=");
scanf("%d",&number);

int reminder;

while(number!=0)
{
reminder=number%10;
sum_of_digit=sum_of_digit+reminder;

number=number/10;
}


printf("sum_of_digit = %d",sum_of_digit);


  return 0;
}
