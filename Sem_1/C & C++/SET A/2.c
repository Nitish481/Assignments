/*In a Banking System The following denomination of notes are used rs. 10, rs. 20, rs. 50, rs. 100
Write a program that will accept an amount as input and find the minimum denomination that will combine to the amount*/

#include<stdio.h>
int main()
{
    int amount,hun=0,fif=0,twen=0,ten=0;
    printf("Enter The Amount: ");
    scanf("%d",&amount);
    while(amount>0)
    {
        if((amount-100)>=0){
            amount=amount-100;
            hun++;
        }
        else if((amount-50)>=0){
            amount=amount-50;
            fif++;
        }
        else if((amount-20)>=0){
            amount=amount-20;
            twen++;
        }
        else if((amount-10)>=0){
            amount=amount-10;
            ten++;
        }
        else if((amount%10)!=0)
		{
        	printf("\nNOT Possible");
        	exit(0);
		}
     
    }
    printf("\n 100 rupees note needed: %d",hun);
    printf("\n 50 rupees note needed: %d",fif);
    printf("\n 20 rupees note needed: %d",twen);
    printf("\n 10 rupees note needed: %d",ten);
    return 0;
    
}
