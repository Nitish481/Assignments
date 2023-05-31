#include<stdio.h>
int bin(int);
int main()
{
    int n;
    printf("Enter The Value of n: ");
    scanf("%d",&n);
    printf("Binary Representation of %d is: ",n);
    bin(n);

}
int bin(int n)
{
    
   if(n==0)
   printf("0");
   else
   {
    bin(n/2);
     printf("%d",(n%2));
   }
    

}
