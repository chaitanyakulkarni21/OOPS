/*Square of a number using function */
#include<stdio.h>
int square(int);
int main()
{
	int n,sq;
	printf("Enter a number \n");
	scanf("%d",&n);
	sq = square(n);
	printf("Square of %d = %d\n",n,sq);
}
int square(int x)
{
	int z;
	z = x * x;
	return z;
}
