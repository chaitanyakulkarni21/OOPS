/* Printing addresses */
#include<stdio.h>
int main()
{
	int i=1 ,*j;
	j = &i;
	printf("Address of i = %u\tValue of i = %d\n",&i,i);
	printf("Address of i = %u\nValue of i = %d\n",j,*j);
	printf("Address of j = %u\tValue of i = %d\n",&j,*(&i));
	printf("Value of j = %d\n",j);
	
}
