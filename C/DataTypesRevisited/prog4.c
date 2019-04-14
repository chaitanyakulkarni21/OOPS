/* Data Types Revisited Register Storage Class */

#include<stdio.h>
int main()
{
 register int i = 3;
 {
 	register int j = 4;
	{
		register int k = 5;
		printf("%d\n",k);
	}
	printf("%d\n",j);
 }
 	printf("%d\n",i);
}
