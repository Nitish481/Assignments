/*Write a program to generate the n-th Fibonacci number where n will be taken as input.
There is a formula for computing the n-th Fibonacci number:*/
#include<stdio.h>
#include<math.h>
void find();
double fib[72];
int main()
	{
		int a;
	    fib[0]=0;
	    fib[2]=1;
	    fib[1]=1;
	    for(a=3;a<=71;a++)
	    {
	        fib[a]=fib[a-1]+fib[a-2];
	    }
	     find();
	    return 0;
	}
	
	void find()
	  {
	  	 int n;
	  	 double diff,r1,r2,r3;
	     printf("\nEnter The Value of n: ");
			scanf("%d",&n);
			double ans=fib[n];
			printf("\n Actual Output: %lf\n",ans);
			r1=(1/sqrt(5))*pow((1+sqrt(5))/2,n);
			r2=(1/sqrt(5))*pow((1-sqrt(5))/2,n);
			r3=r1-r2;
			printf("\nFormal Output: %lf\n",r3);
			diff=fabs(r3-ans);
			printf("\ndifference is %lf\n",diff);
	      
	  }
	
	     

