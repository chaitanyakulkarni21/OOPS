/* Problem 2 */
#include<stdio.h>
void function(int *,int *);
int main()
{
	int i=2 ,j=5;
	function(&i,&j);
	printf("%d %d\n",i,j);
	return 0;
}
void function(int *i,int *j)
{
	*i = *i * *i;
	*j = *j * *j;
}
