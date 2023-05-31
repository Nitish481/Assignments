/*Write a program to find the reverse of any number & check whether the number is a
palindrome or not.*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void solve();

int main()
{
     solve();
     
    return 0;
}

void solve()
  {
     static int k=1;
      printf("Enter any Number: ");
     char s[50];
    scanf("%s",s);
    int i=0,j=0;
    while(s[i]=='0')
	{
        i++;
    }
    while(s[j]!='\0')
	{
        j++;
    }
    
    j-=1;
    int p=j;
    while(s[j]=='0')
	{
        j--;
    }
    
    printf("\nReverse: ");
    for(k=j;k>=i;k--)
	{
        putchar(s[k]);
    }
    printf("\n");
    int flag=1;
    if(j==p){
        for(k=0;k<(j-i+1)/2;k++){
            if(s[j-k]!=s[i+k]){
                flag=0;
                break;
            }
        }
    }
	else
	{
        flag=0;
    }
    
    if(flag)
	{
        printf("\nIt is a palindrome\n");
    }
	else
	{
        printf("\nIt is NOT a palindrome\n");
    }
}

