/*W.A.P. to print all prime numbers between 1 and n. (n will be given as input).*/
#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the Value of n: ");
	scanf("%d",&n);
	if(n<=0 || n==1 || n==2)
	printf("\nNo Prime Number Present.");
	else
	for(i=2;i<n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
		  if(i%j==0)
		  count++;
    	}
	if(count==2)
		printf("%d ",i);
	
}
}
