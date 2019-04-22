/* string concatenation */
#include<stdio.h>
void strcat(char *,char*);
int main()
{
	char str1[50],str2[20],i,l=0;
	printf("Enter string 1 :\n");
	scanf("%s",str1);
	printf("Enter string 2 :\n");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("After concatenation: %s\n",str1);
	return 0;
}
void strcat(char *p,char *q)
{
	int i,j;
	// i=0;
	// while(p[i]!=0){
	// 	i++;
	// }	
	// j=0;
	// while(q[j] != 0){
		
	
	// 	p[i]=q[j];
	// 	j++;
	// 	i++;
	// }
	
	for(i=0;p[i]!='\0';i++);
	for(j=0;q[j]!='\0';j++)
	{
		p[i]=q[j];
		i++;
	}
	p[i] = '\0';
}
