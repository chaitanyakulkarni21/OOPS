/* Power of a number */

#include<stdio.h>
int main(){
	int i,a,b,c=1;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++){
		c = c * a; 
	}
	printf("%d raised to power %d = %d",a,b,c);
}
