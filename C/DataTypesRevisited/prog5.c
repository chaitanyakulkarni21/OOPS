/* Data types revisited Register Storage Class */
#include<stdio.h>
void function();
int main()
{
	function();
	function();
}
void function()
{
	int i = 4;
	static int k = 5;
	i++;
	k++;
	printf("Auto Value : %d\n",i);
	printf("Static Value : %d\n",k);
	printf("Static Value : %d\n",k);
}
