#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Value of a: ");
    scanf("%d",&a);
    printf("\nEnter THe Value of b: ");
    scanf("%d",&b);
    printf("\nGCD of %d & %d is: %d",a,b,gcd(a,b));
}
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else
    gcd(b,a%b);

}