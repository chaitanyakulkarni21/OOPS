/* Compare first n char of two strings */
#include<stdio.h>
void strncmp(char*,char*,int);
int main()
{
 	char str1[20],str2[20],n;
 	printf("Enter number of characters of to be compare:\n");
 	scanf("%d",&n);
 	printf("Enter string 1 : \n");
 	scanf("%s",str1);
 	printf("Enter string 2 :\n");
 	scanf("%s",str2);
 	strncmp(str1,str2,n);
	return 0;
}
void strcmp(char* str1,char* str2,int n)
{
	int i,j;
	for(i=0,j=0;i<=n-1;i++,j++)
	{
		printf()
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
