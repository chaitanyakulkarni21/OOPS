#include<stdio.h>
void message();
int main()
{
	int a;
	message();//function return type is void so cannot be assigned to a variable
}
void message()
{
	printf("Followed by C++,C# and JAVA\n");
	return;
}
