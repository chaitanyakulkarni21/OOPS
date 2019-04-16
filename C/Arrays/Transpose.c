/* Transpose of a matrix */
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("Enter matrix :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Entered matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[i][j] = a[j][i];
		}
	}
	printf("Transpose of matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
