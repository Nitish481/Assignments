#include <limits.h>
#include <stdio.h>
 
void thirdLargest(int arr[], int arr_size)

{
	int i;
    if (arr_size < 3) {
        printf(" Invalid Input ");
        return;
    }
 
    int first = arr[0];
    for (i = 1; i < arr_size; i++)
        if (arr[i] > first)
            first = arr[i];

    int second = INT_MIN;
    for (i = 0; i < arr_size; i++)
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
 
    int third = INT_MIN;
    for (i = 0; i < arr_size; i++)
        if (arr[i] > third && arr[i] < second)
            third = arr[i];
 
    printf("\nThe third Largest element is %d\n", third);
}
void fivmin(int arr[], int arr_size)
{
	int i;
	
    int fi = arr[0];
    for (i = 1; i < arr_size; i++)
        if (arr[i] < fi)
            fi = arr[i];

    int se = INT_MAX;
    for (i = 0; i < arr_size; i++)
        if (arr[i] < se && arr[i] > fi)
            se = arr[i];
 
    int th = INT_MAX;
    for (i = 0; i < arr_size; i++)
        if (arr[i] < th && arr[i] > se)
            th = arr[i];
            
            int fo = INT_MAX;
    for (i = 0; i < arr_size; i++)
        if (arr[i] < fo && arr[i] > th)
            fo = arr[i];
 
    int fif = INT_MAX;
    for (i = 0; i < arr_size; i++)
        if (arr[i] < fif && arr[i] > fo)
            fif = arr[i];
            
 
    printf("\nThe Fifth Minimum element is %d\n", fif);
}

 
int main()
{
    int arr[100],n,i,j;
    printf("\nEnter The Number of Elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
    	printf("\nEnter %d th  value: ",i);
    	scanf("%d",&arr[i]);
    }
    printf("\nThe Array Elements are: ");
    for(j=0;j<n;j++)
    {
	printf("%d\t",arr[j]);
    }
    thirdLargest(arr, n);
    fivmin(arr,n);
   if(n%2==0)
	{
		printf("\nThe middle element of the array is %d and %d.\n", arr[n/2-1], arr[n/2]);
	}
	else
	{
		printf("\nThe middle element of the array is %d.\n", arr[n/2]);
	}
    
    return 0;
}
 
