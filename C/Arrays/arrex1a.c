/* Array exercise */
#include<stdio.h>
int main()
{
	int i;
	int b[] = {10,20,30,40,50};
	for(i=0;i<=4;i++)
	{
		printf("%d ",*(b+i));
	}
	return 0;
}
