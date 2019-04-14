/* Data Types Revisited Storage Classes prog 3 */
/* Auto Storage Classes */

#include<stdio.h>
int main()
{
	auto int i = 4;
	{
		auto int j = 5;
		{
			auto int k = 6;
			printf("%d\n",k);
		}
		printf("%d\n",j);
	}
	printf("%d\n",i);
}
