/* 2d Array */
#include<stdio.h>
int main()
{
	int stud[4][2];
	int i,j;
	for(i=0;i<=3;i++)
	{
		printf("Enter roll num and marks\n");
		scanf("%d%d",&stud[i][0],&stud[i][1]);
	}
	for(i=0;i<=3;i++)
	{
		printf("%d %d ",&stud[i][0],&stud[i][1]);
	}
	return 0;
}
