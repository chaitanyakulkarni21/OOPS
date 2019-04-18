/* Count the length of the string */
#include<stdio.h>
int main()
{
	char str[20],i,l=0;
	printf("Enter a String:\n");
//	scanf("%s",str);
	gets(str);	// used gets... gets counts <space>
	
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("Length of the string is : %d\n",l);
	return 0;
}
