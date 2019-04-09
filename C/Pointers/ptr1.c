#include<stdio.h>
int main()
{
	int i = 2,*j;
	j = &i;
	printf("Value of i = %d\t",i);
	printf("Address of i = %u\n",&i);
	printf("Value of i = %d\t",*j);
	printf("Address of i = %u\n",j);
	printf("Value of i = %d\t",*(&i));
}
