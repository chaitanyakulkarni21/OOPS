/* Sum, Average and Standard Deviation */
#include<stdio.h>
int SumAvgDeviation(int *,int *,int *,int *,int *);
int main()
{
	int a,b,c,d,e,sum,avg,std;
	printf("Enter 5 numbers :\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum = SumAvgDeviation(&a,&b,&c,&d,&e);
	printf("Sum = %d\n",sum);
	avg = SumAvgDeviation(&a,&b,&c,&d,&e);
//	std = SumAvgDeviation(&a,&b,&c,&d,&e);
	printf("Avg = %d\n",avg);
}	
int SumAvgDeviation(int *p,int *q,int *r,int *s,int *t)
{
	int sum,avg,std;
	sum = *p + *q + *r + *s + *t;
	avg = sum / 5;
	return(avg);
	return(sum);
	
}
