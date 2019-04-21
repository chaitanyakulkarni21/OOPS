#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,k;
	int r1,c1,r2,c2;
	printf("Input size of first array :");
	scanf("%d%d",&r1,&c1);
	printf("Input size of second array :");
	scanf("%d%d", &r2,&c2);
	if (c1==r2)
	{
		printf("\nInput %d elements of first array :",r1*c1);
		for(i=0;i<r1 ;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\Input %d elements of second array :" ,r2*c2);
		for(i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nEntered first array is \n");
		for(i=0;i<r1;i++)
		{
				for(j=0;j<c1;j++)
				{
					printf("%d ",a[i][j]);
				}
					printf("\n");
		}
		printf("\nEntered second array is \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",b[i][j]);
			}
				
			printf ("\n") ;
		}
		
		printf("\n Product Of above arrays is\n");
		for(i=0;i<r1;i++)
		{
				for(j=0;j<c2; j++)
				{
					c[i][j]=0;
					for (k=0;k<c1;k++)
					{
						c[i][j]=c[i][j]+ a[i][k]*b[k][j];
					}
					printf("%d ",c[i][j]);
				}
				printf("\n");
		}
	}
	else
	{
		printf("\nWrong dimensions, not suitable for product ...");
	}
		
}

