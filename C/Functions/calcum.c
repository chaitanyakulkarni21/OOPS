/*Calculate sum of two numbers using functions*/
#include<stdio.h>
int calsum(int ,int);
int main(){
	int a,b,sum;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	sum = calsum(a,b);
	printf("Sum = %d",sum);
}
int calsum(int x,int y){
	int z;
	z=x+y;
	return z;
}
