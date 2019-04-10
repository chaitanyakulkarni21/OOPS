/* Errors: Problem 1 */
#include<stdio.h>
void pass (int,int);
int main()
{
	int i=135,a=135,k;
	k = pass(i,a);	// Error : returning a value while using void
	printf("%d\n",k);
	return 0;
}
void pass(int j, int b)
int c;			//Error : c undeclared 
{
	c = j + b;
	return c;
}
