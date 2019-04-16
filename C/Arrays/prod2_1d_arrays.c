/* Product of two 1 dimensional arrays */
#include<stdio.h>
#define MAX 5
int main()
{
	int a[MAX],b[MAX],i,p=0;
	printf("Enter the array 1 :\n");
	for(i=0;i<=MAX-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the array 2 :\n");
	for(i=0;i<=MAX-1;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nArray 1:\n");
	for(i=0;i<=MAX-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray 2 :\n");
	for(i=0;i<=MAX-1;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<=MAX-1;i++)
	{
		p = p + a[i] * b[i];
	}
	printf("\nArray 1 * Array 2: %d\n",p);
}
