#include<stdio.h>
void SumAvg(int *,int*);
int main()
{
    int sum,avg;
    SumAvg(&sum,&avg);
    printf("Sum = %d\nAvg = %d\n");
    return 0;
}
void SumAvg(int *sum, int *avg)
{
    int a,b,c,d,e;
    printf("Enter five numbers : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    *sum = a+b+c+d+e;
    *avg = *sum/5;
}