/*Sum of n whole numbers using function */
#include<stdio.h>
int sumofn(int);
int main()
{
	int n,sum;
	printf("Enter nth term \n");
	scanf("%d",&n);
	sum=sumofn(n);
	printf("Sum of first %d whole numbers = %d\n",n,sum);
}
int sumofn(int n)
{
	int i,sum=0;
	for(i=0;i<=n;i++)
	{
		sum = sum + i;		
	}
	return sum;
}
