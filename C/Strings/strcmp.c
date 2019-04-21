/* String Compare */
#include<stdio.h>
void strcmp(char*,char*);
int main()
{
 	char str1[20],str2[20];
 	printf("Enter string 1 : \n");
 	scanf("%s",str1);
 	printf("Enter string 2 :\n");
 	scanf("%s",str2);
 	strcmp(str1,str2);
	return 0;
}
void strcmp(char* str1,char* str2)
{
	int i,j;
	for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
		if(str1[i]>str2[j])
		{
			printf("String 1 is greater than string 2\n");
			break;
		} else if(str1[i]==str2[j]){
			printf("Both strings are equal\n");
			break;
		} else{
			printf("String 2 is greater than string 1\n");
		}
		break;
	}
}
