/* Swapping of two numbers using call by reference */
#include<stdio.h>
void swap (int * ,int *);
int main()
{
	int a,b,*p1,*p2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping:\n %d %d\n",a,b);
	p1 = &a;
	p2 = &b;
	swap(p1,p2);
	printf("After swapping : \n %d %d\n",a,b);
}
void swap (int *p1,int *p2)
{
	int t;
	t=*p1; 
	*p1 = *p2;
	*p2=t;
}
