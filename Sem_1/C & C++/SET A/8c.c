/*log(1+x)=x-x^2/2+x^3/3-x^4/4....;where-1<x<=1*/
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void solve();
double fact[1000000];
int main()
{
	int i,t;
     fact[1]=1;
for(i=2;i<=1000000;i++)
{
fact[i]=i*fact[i-1];
}   

          solve();
          
     return 0;
}
void solve()
{
     double n;
     printf("\nEnter The Value of n: ");
     scanf("%lf",&n);
     double num=n;
     int term=1000000,i=1;
     double sign=+1;
     double sum=0;
     while(term--)
     {
       sum-=-(num/i)*sign;
       num*=n;
       i+=1;
       sign*=-1;
     }
     printf("\nResult: %lf\n",sum);
}
