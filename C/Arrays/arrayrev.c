/* Reverse an Array */
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the array elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEntered array is \n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nReversed Array:\n");
	for(i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
