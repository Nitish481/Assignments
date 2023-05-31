/*Write a program to convert farhenheit to celcius and vice varsa*/
#include<stdio.h>
int main()

{
    double f,c;
    int n;
    printf("Press 1 to Convert Celcius to Farhenheit.\n");
    printf("Press 2 to Convert Ferhenheit to celcius.\n");
    printf("Press any key to exit.\n");
    printf("\nEnter Your Choice: ");
    scanf("%d",&n);
    if(n==1)
    {
         printf("\nEnter Temp. in Celcius: ");
         scanf("%lf",&c);
         if(c==-17.7778)
         {
         	f=0.00;
         	printf("\nTemp. in farhenheit: %.4lf deg F",f);
         }
         else
		 {
         f=(c*9/5)+32;
         printf("\nTemp. in farhenheit: %.4lf deg F",f);
         }
        
    }
    else if(n==2)
    {
        printf("\nEnter Temp. in Ferhenhait: ");
        scanf("%lf",&f);
         c=(f-32)*5/9;
         printf("\nTemp. in Celcius: %.4lf deg C",c);
  
    }
    else
    {
        printf("\nWrong Entry ! Thank You for Using My Converter");
    }
    
}
