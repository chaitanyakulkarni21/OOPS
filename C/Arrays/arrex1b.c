/* Array exercise 1b */
#include<stdio.h>
int main()
{
	int b[] = {0,20,0,40,5};
	int i,*k;
	k = b;
	for(i=0;i<=4;i++)
	{
		printf("%d ",*k);
		k++;
	}
	return 0;
}
