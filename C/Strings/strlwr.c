/* String Lowercase */
#include<stdio.h>
void strupr(char*);
int main()
{
	char str[20];
	printf("Enter string : \n");
	scanf("%s",str);
	strupr(str);
	printf("String Lowercase: %s\n",str);
	return 0;
}
void strupr(char* str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str[i] = str[i] + 32;
	}
}
