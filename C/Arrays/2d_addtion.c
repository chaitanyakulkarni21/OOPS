/* Addition of 2D arrays */
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter matrix 1:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Enter matrix 2:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix 1:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix 2:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nResultant Matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
