#include<stdio.h>
int fib(int num);
int main()
{
    int n,c,i,t,j;
    printf("\nEnter The Number of Test Cases: ");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { 
    printf("\nEnter The Value of n: ");
    scanf("%d",&n);
    printf("\nFibonacci Series: \n");
    for(j=0;j<n;j++)
    printf("%d\t",fib(j));
    }
    
}
int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
