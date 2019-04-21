/* String Upper case */
#include<stdio.h>
void strlwr(char*);
int main()
{
	char str[20];
	printf("Enter string : \n");
	scanf("%s",str);
	strlwr(str);
	printf("String Uppercase: %s\n",str);
	return 0;
}
void strlwr(char* str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str[i] = str[i] - 32;
	}
}
