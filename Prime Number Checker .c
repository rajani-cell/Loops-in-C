//*Prime Number Checker*: Develop a program that checks if a given number is prime using loops for iteration.
#include<stdio.h>

int main()
{
    
    
   int num,count=0;
   printf("Enter number =");
   scanf("%d",&num);
   
   
   for(int i=2;i<num;i++)
   {
       
  if(num%i==0)
  {
      count++;
      break;
  }
  
   }
    
    if(count==0)
    {
        printf("%d is prime number.",num);
    }
    
    else
    {
      printf("%d is not prime number.",num);  
    }
    
    return 0;
}
