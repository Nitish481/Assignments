//sum=2*3+3*5+5*7....
#include<stdio.h>
#include<math.h>
int prime(int);
void solve();
int arr[1001];
int main()
{
     int t,j=2,i;
     arr[0]=2;
     arr[1]=3;
     for(i=5;i<=8000;i++)
     {
          if(!prime(i)) arr[j++]=i;
     }
	
     solve();
     
    return 0;
}

int prime(int n)
{
	int i;
    if(n==2) return 1;
    for(i=2;i<n;i++)
    {
        if(n%i==0) return 1;
        
    }
    return 0;
}
void solve()
  {
          int n,i=0;
          printf("\nEnter The Value of n: ");
         scanf("%d",&n);
         long long int sum=0;
         while(n--)
         {
          sum+=arr[i++]*arr[i];
          
         }
         printf("\nResult: %lld\n",sum);
}
 
