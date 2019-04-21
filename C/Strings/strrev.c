/* String Reverse */
#include<stdio.h>
void strrev(char *);
int main()
{
	char str[20];
	printf("Enter a string: \n");
	scanf("%s",str);
	strrev(str);
	printf("After Reverse : %s\n",str);
	return 0;
}
void strrev(char* str)
{
	int i,count;
	char st;
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i];
	}
}
