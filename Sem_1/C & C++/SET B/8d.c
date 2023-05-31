#include<stdio.h>
int sum(int num);
int main()
{
    int n,c;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    c=sum(n);
    printf("Sum of %d digit is: %d",n,c);


}
int sum(int n)
{
   if(n!=0)
   {
    return (n%10+sum(n/10));
   }
   else
   return 0;

}