//*Fibonacci Sequence*: Write a program to generate and print the first N numbers in the Fibonacci sequence using a loop.
#include<stdio.h>

int main()
{
    
    
   int num;
   printf("Enter number =");
   scanf("%d",&num);
   
   int a=0,b=1,result;
   
   for(int i=0;i<num;i++)
   {
       
    printf("%d ",a);
    result=a+b;
    a=b;
    b=result;

    
   }
    
    
    return 0;
}
