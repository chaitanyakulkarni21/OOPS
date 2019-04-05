/* To print even and odd numbers separately */

#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter end number:\n");
	scanf("%d",&n);
	printf("\nEven Numbers\n");
	for(i=0;i<=n;i=i+2){
		printf("%d\t",i);
	}
	printf("\nOdd Numbers\n");
	for(j=1;j<=n-1;j=j+2){
		printf("%d\t",j);
	}
}
