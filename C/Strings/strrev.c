/* String Reverse */
#include<stdio.h>
#include<string.h>
void strngrev(char *);
int main()
{
	char str[20];
	printf("Enter a string: \n");
	scanf("%s",str);
	strngrev(str);
	printf("After Reverse : %s\n",str);
	return 0;
}
void strngrev(char* str)
{
	int i,count,len;
	char st[20];
	len=strlen(str);
	strcpy(st,str);
	
	for(i=0,count=len-1;str[i]!='\0';i++,count--)
	{
		str[i] = st[count];
	}
	//str[i] ='\0';
}
