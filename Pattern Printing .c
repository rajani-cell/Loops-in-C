//*Pattern Printing*: Create patterns using nested loops, such as a pyramid, a square, or a right-angled triangle made of asterisks
#include<stdio.h>

int main()
{
    
    
   int num;
   printf("Enter the number of row =");
   scanf("%d",&num);
   
   printf("PAYRAMID=\n");
   for(int i=0;i<num;i++)
  {
      for(int j=0;j<(2*num)-1;j++)
      {
         if(j>=num-(i+1) && j<=num+(i-1)) 
         {
             printf("*");
         }
         else
         {
              printf(" "); 
         }
          
          
      }
     printf("\n"); 
      
  }
  
  printf("\n\nSQURE=\n");
  
  for(int i=0;i<num;i++)
  {
      for(int j=0;j<num;j++)
      {
    
              printf("*"); 
        
          
          
      }
     printf("\n"); 
      
  }
 
  printf("\n\nTROIANGLE=\n");
  
  for(int i=0;i<num;i++)
  {
      for(int j=0;j<=i;j++)
      {
    
              printf("*"); 
        
          
          
      }
     printf("\n"); 
      
  }
  
    
    return 0;
}
