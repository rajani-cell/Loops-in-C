#include<stdio.h>

int main()
{
    
    
   int num,mult;
   printf("Enter number =");
   scanf("%d",&num);
   
   
   for(int i=1;i<=10;i++)
   {
       
  mult=num*i;
  
  printf("%d*%d=%d\n",num,i,mult);
    
   }
    
    
    return 0;
}
