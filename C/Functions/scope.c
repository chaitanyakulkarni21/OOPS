/*Scope of a variable in functions */
#include<stdio.h>
void scope(int);
int main()
{
	int i=2;
	printf("in main\n");
	printf("i=%d\n",i);
	scope(i);
}
void scope(int i)
{
	printf("\nin function\n");
	printf("i=%d\n",i);
}
