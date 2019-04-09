/*Swapping of two numbers using call by value*/
#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping:\n %d %d\n",a,b);
	swap(a,b);
}
void swap(int x , int y)
{
	int t;
	t=x; x=y; y=t;
	printf("After swapping:\n %d %d\n",x,y);
}
