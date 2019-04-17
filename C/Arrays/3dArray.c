/* Print a 3d array */
#include<stdio.h>
int main()
{
	int i,j,k,m[3][3][3];
	printf("Enter the array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				scanf("%d",&m[i][j][k]);
			}
		}
	}
	printf("The entered array is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",m[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
	
}
