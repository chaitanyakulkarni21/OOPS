/* String Copy */
#include<stdio.h>
void strcpy(char*,char*);
int main()
{
	char str1[20],str2[20];
	printf("Enter string 1 : \n");
	scanf("%s",str1);
	printf("Enter string 2 : \n");
	scanf("%s",str2);
	strcpy(str1,str2);
	printf("After copy : %s",str1);
	return 0;
}
void strcpy(char *str1,char *str2)
{
	int i,j;
	for(i=0,j=0;str1[i]!='\0';i++,j++)
	{
		str1[i] = str2[j];
	}
}
