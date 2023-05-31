/*sin(x)=x-x^3/3!+x^5/5!+x^7/7!+.....*/
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void solve();
double fact[100];
int main()
{
	int i,t;
     fact[1]=1;
for(i=2;i<=100;i++)
{
fact[i]=i*fact[i-1];
}
          solve();
          
     return 0;
}
void solve()
{
     
     printf("\nEnter The Value of n: ");

      double n;
     scanf("%lf",&n);
     double num=n;
     int term=50,i=1;
     double sign=+1;
     double sum=0;
     while(term--)
     {
       sum+=(num/fact[i])*sign;
       num*=n;num*=n;
       i+=2;
       sign*=-1;
     }
     printf("\nResult: %lf\n",sum);
}
