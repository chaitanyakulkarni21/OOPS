/* Pointers*/

#include<stdio.h>
int main()
{
	int a=4,*p;
	p = &a;
	printf("Using Pointers:\n%d %u\n",*p,p);
	printf("Using variable: \n%d %u\n",a,&a);
}
