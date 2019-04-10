#include<stdio.h>
void function(int,int);
int main()
{
	int a=1,b=3;
	function(1,3);
}
void function (int a,int b)
{
	printf("%d %d",a,b);
}
