#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void random_partition(int *a, int n)
{
	int i, j = 0, x, p, ans[n], k, an[n], c = 0, d = 0;
	x = rand() % n;
	p = a[x];
	printf("\nLet X be:%d\n", p);
	for (i = 0; i < n; i++)
	{
		if (a[i] < p)
		{
			ans[j++] = a[i];
			c = c + 1;
		}
		else if (a[i] > p)
		{
			an[k++] = a[i];
			d = d + 1;
		}
	}

	printf("\nElements Less than %d are: ", p);
	for (j = 0; j < c; j++)
		printf("%d ", ans[j]);
	printf("\nElements Greater than %d are: ", p);
	for (k = 0; k < d; k++)
		printf("%d ", an[k]);
}
int main()
{
	int n, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	random_partition(a, n);
	return 0;
}
