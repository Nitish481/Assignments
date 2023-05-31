// GCD of two numbers using Euclid's algorithm & Factorization Method
#include <stdio.h>
void main() 
{
    int a,b,r,n,temp1,temp2,i,gcd;
    printf("\nPress 1 to GCD Using Euclid's Algorithm.");
    printf("\nPress 2 to GCD Using Factorization Method.");
    printf("\nEnter Your Choice: ");
    scanf("%d",&n);
    switch(n)
    {
	    case(1):
	    
	    printf("\nEnter First Number: ");
	    scanf("%d",&a);
	    printf("\nEnter Second Number: ");
	    scanf("%d",&b);
	    if(a==0 && b==0)
	    {
	    printf("\nGCD of %d & %d is : Infinity",a,b);
	    exit(0);
    	}
	    else
	    temp1=a;
	    temp2=b;
	    while (b > 0)
		{
	        r = a%b;
	        a = b;
	        b = r;
	    }
	    printf ("\nBy Using Euclid's Algorithm GCD of %d & %d is: %d \n",temp1,temp2,a);
	    break;
	    case(2):
	    printf("\nEnter First Number: ");
	    scanf("%d",&a);
	    printf("\nEnter Second Number: ");
	    scanf("%d",&b);
		    if(a==0)
		    {
		    	if(b==0)
		    	{
		          printf("\nGCD of %d & %d is : Infinity",a,b);
		          exit(0);
		        }
		        else
		        printf("\n GCD of %d & %d is: %d",a,b,b);
	    	}
		    else
		    temp1=a;
		    temp2=b;
		    for(i=1; i <=a && i <=b; ++i)
	    {
	        if(a%i==0 && b%i==0)
	            gcd = i;
	    }
		    printf("\nBy Using Factorization Method GCD of %d and %d is: %d\n", temp1, temp2, gcd);
		    break;
		    default:
		    	printf("\nWrong Choice!! Thank You For Using The Program.");
	}
	    getch();
	}
