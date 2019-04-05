/* To display the first n natural numbers and calculate their sum and average */
#include<stdio.h>
int main(){
	int i,n,s=0,avg;
	printf("Enter the nth number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",i);
	}
	printf("\n");
	for(i=1;i<=n;i++){
		s = s + i;
	}
	printf("\nSum = %d\n",s);
	avg = s/n;
	printf("\nAverage = %d\n",avg);
}
