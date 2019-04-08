#include<stdio.h>
void message();
int main()
{
	message(message());// function cannot be called inside a function as a parameter
	return 0;
}
void message()
{
	printf("Its a small world after all....\n");
}
