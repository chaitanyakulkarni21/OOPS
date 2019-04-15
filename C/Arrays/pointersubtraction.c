/* Subtraction of a number from a pointer */
#include<stdio.h>
int main()
{
	int i = 4, *j,*k;
	j = &i;
	j = j - 2;
	j = j - 5;
	k = j - 6;
	printf("%d %d",j,k);
}
