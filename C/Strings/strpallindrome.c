/* To check whether string is a pallindrome */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j;
	printf("Enter a string : \n");
	scanf("%s",str);
	for(i=0 , j=strlen(str)-1 ; i<=j ; i++,j--)
	{
		if(str[i]!=str[j])
		{
			break;
		}
	}
	if(i>j)
		{
			printf("String is pallindrome\n");
		}
		else
		{
			printf("String is not a pallindrome\n");
		}
	return 0;
}