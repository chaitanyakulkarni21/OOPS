/* Count the number of odd and even numbers in a 2d array */
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,ev=0,od=0;
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
			if(a[i][j]%2==0)
			{
				ev++;
			}
			else
			{
				od++;
			}
		}
	}
	printf("\nTotal even elements = %d\n",ev);
	printf("\nTotal odd elements = %d\n",od);
	return 0;
}
