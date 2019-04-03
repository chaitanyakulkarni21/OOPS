/*Sum of first n terms */

#include<stdio.h>
int main(){
	int i,s=0,n;
	printf("Enter nth term : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s = s + i;
	}
	printf("Sum of first %d numbers = %d",n,s);
}
