/* Errors prob4 */
#include<stdio.h>
void function(int *);
int main()
{
	int i=35,*z;
	z = function (&i);	// returning a value while using void
	printf("%d\n",z);
	return 0;
}
void function (int *m)
{
	return (*m+2);
}
