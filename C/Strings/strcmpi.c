/* String Compare */
#include<stdio.h>
int strcmpi(char*,char*);
int main()
{
	int t=0;
 	char str1[20],str2[20];
 	printf("Enter string 1 : \n");
 	scanf("%s",str1);
 	printf("Enter string 2 :\n");
 	scanf("%s",str2);
 	t = strcmpi(str1,str2);
 	printf("%d",t);
	return 0;
}
int strcmpi(char* str1,char* str2)
{
	
	
	int i,j,isequal=0;
	for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
	{
//		printf("%d ",i);
		 if((str1[i]==str2[j]) || (str1[i]-str2[j]==32) || (str1[i]-str2[j]==-32)){
//			printf("Both strings are equal\n");
		isequal = 1;
		} else
		{
//			printf("String 1 is greater than string 2\n");
			return 0;
		} 

	}
	
	return isequal;
//	
//	
}
