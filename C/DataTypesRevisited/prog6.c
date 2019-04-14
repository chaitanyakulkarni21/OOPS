/* Data types revisited Extern Storage Class */
#include<stdio.h>
int i = 4;
void fun();
int main()
{
	printf("Extern Value inside main : %d\n",i);
	fun();
	fun();
	fun();
}
void fun()
{
	printf("Inside Fun : %d\n",i);
}
