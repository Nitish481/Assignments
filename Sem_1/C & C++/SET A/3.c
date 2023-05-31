/*In a hotel, a professor lives in room no. X. The room numbers are sequentially numbered
from 1 to n (n can be any integer). The sum of the room numbers left to X is equal to the
sum of the room numbers to the right of X. Write a program to find X.*/
#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
           int flag=1,i; 
         printf("\nEnter The Value of n: ");
           scanf("%ld",&n);
         for(i=1;i<=n;i++)
         {
            if(2*i*i==n*(n+1)) 
			{
			printf("\nThe room no is %d\n",i); 
			  flag=0;
			}
         }
          
          if(flag) 
		  
		  printf("\nThe room no is not possible");
      
      
   return 0;        

}
