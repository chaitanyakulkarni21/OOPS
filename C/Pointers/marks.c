/* Write a program that receives marks received by a student in 3 subjects and returns average and percentage
Call this function in main and print the result in main */
#include<stdio.h>
int result(int * ,int *, int *);
int main()
{
    int m1,m2,m3,avg,*p,*q,*r;
    float per;
    printf("Enter marks obtained in 3 subjects: \n");
    scanf("%d%d%d",&m1,&m2,&m3);
    p = &m1;
    q = &m2;
    r = &m3;
    avg = result(p,q,r);
    printf("Average = %d\n",avg);
    per = result(p,q,r);
    printf("Percentage = %.2f\n",per);
}
int result(int *p,int *q,int *r)
{
    int avg;
    float per;
    avg = (*p+*q+*r)/3;
    per = (*p+*q+*r)*100/3;
    return avg;
    return per;
}