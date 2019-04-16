/* Sum of array elements */
#include<stdio.h>
int main()
{
	int a[10],i,s=0;
	printf("Enter the array elements\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The entered array is :\n");
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		s = s + a[i];
	}
	printf("\nSum of the elements of the array is : %d\n",s);
}
