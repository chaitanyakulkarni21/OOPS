/* Greatest of two numbers using functions */
#include<stdio.h>
void greatest(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	greatest(a,b);
}
void greatest(int x,int y){
	if(x>y)
	{
		printf("%d is large \n",x);
	} else 
	{
		printf("%d is large \n",y);
	}
}
