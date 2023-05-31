/*Write a program to find the value of one number raised to the power of the other number
without using the library function pow().*/
#include<stdio.h>
int main()
{
	double n,p,i,output=1;
	printf("\nEnter The Base: ");
	scanf("%lf",&n);
	printf("\nEnter The exponential: ");
	scanf("%lf",&p);
     if(n<0 && p<0)
	{
		p=p*(-1);
	}
	for(i=1;i<=p;i++)
	{
		output=output*n;
	}
	if(n==0 && p<=0)
	{
		printf("\n Undefined");
	}
	else
	{
		printf("\n Output= %lf",output);
	}
	return 0;
}
