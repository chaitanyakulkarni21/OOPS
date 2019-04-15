/* Array Exercise 1c */
#include<stdio.h>
void change(int *,int);
int main()
{
	int a[]= {2,4,6,8,10};
	int i;
	change(a,5);
	for(i=0;i<=4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void change (int *b,int n)
{
	int i;
	for(i=0;i<=4;i++)
	{
		*(b+i) = *(b+i) + 5;
	}
}
