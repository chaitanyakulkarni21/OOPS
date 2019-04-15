/*Array ex 1d */
#include<stdio.h>
int main()
{
	static int a[5];	//since array is taken static, all the elements are initialised to zero
	int i;
	for(i=0;i<=4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
