#include<stdio.h>
void message();
int main()
{
	message(message());	//can't call a function as a parameter of another function
}
void message()
{
	printf("Its a small world after all\n");
}
