/* To calculate the row sum of a 2d array */
#include<stdio.h>
int main()
{
	int a[5][5],i,j,rs = 0;
	printf("Enter a 2d array:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered array is :\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			rs = rs + a[i][j];
		}
		printf("\nSum of %d elements of the row %d = %d",i+1,rs);
}
