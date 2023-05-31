//e=1/1!+2/2!+....
#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
void solve();
double fact[10];
int main()
{
	int i,t;
     fact[1]=1;
for(i=2;i<=10;i++)
{
fact[i]=i*fact[i-1];
}

          solve();
          
     return 0;
}
void solve()
{
	int n;
     printf("\nEnter The Value of n: ");
     scanf("%d",&n);
     int term=n,i=1;
     double num=1;
     double sum=0;
     while(term--)
     {
       sum+=(num/fact[i]);
       num+=1;
       i+=1;
     }
     printf("\nResult: %lf\n",sum);
}
