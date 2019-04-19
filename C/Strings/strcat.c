/* string concatenation */
#include<stdio.h>
void strcat(char *,char*);
int main()
{
	char str1[20],str2[20],i,l=0;
	printf("Enter string 1 :\n");
	scanf("%s",str1);
	printf("Enter string 2 :\n");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("After concatenation: %s",str1);
	

	
}
void strcat(char *p,char *q)
{
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("char is =%d\n",p[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("char is =%d\n",q[i]);
	}
	i=0;
	while(p[i]!=0){
		i++;
		printf("i=%d\n",i);
	}
	
	j=0;
	while(q[j] != 0){
		
	
		p[i]=q[j];
		printf("j=%d",j);
		j++;
			i++;
	}
	
}
