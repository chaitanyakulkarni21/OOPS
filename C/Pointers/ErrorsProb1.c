/* Errors: Problem 1 */
#include<stdio.h>
int pass (int,int);
int main()
{
	int i=135,a=135,k;
	k = pass(i,a);	// Error : returning a value while using void
	printf("%d\n",k);
	return 0;
}
int pass(int j, int b)
			//Error : c undeclared 
{
	int c;
	c = j + b;
	return c;
}
