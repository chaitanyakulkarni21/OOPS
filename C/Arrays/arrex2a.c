/* Array exercise 2a */
#include<stdio.h>
int main()
{
	int array[6] = {1,2,3,4,5,6};
	int i;
	for(i=0;i<=5;i++)	// No error, but the for loop runs beyond array size 
	{
		printf("%d ",array[i]);
	}
	return 0;
}
