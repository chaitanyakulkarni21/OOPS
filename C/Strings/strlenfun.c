/* String length using string function */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "Chaitanya kulkarni";
	int i,l;
//	printf("Enter a string:\n");
//	scanf("%s",str);
	l= strlen(str);
	printf("The length of the string is = %d",l);
}
