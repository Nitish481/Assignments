/*cos(x)=x-x^2/2!+x^4!-....*/
#include <stdio.h>
void solve();
double fact[200];
int main()
{
	int i,t;
     fact[1]=1;
for(i=2;i<=200;i++)
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
     double num=n*n;
     int term=100,i=2;
     double sign=+1;
     double sum=1;
     while(term--)
     {
       sum-=(num/fact[i])*sign;
       num*=n;num*=n;
       i+=2;
       sign*=-1;
     }
     printf("\nResult: %lf\n",sum);
}
