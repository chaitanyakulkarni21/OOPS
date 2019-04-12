/* Write a program that receives marks received by a student in 3 subjects and returns average using pointers
Call this function in main and print the result in main */
#include<stdio.h>
int result(int *);
int main()
{
    int avg;
    result(&avg);
    printf("Average = %d\n",avg);
}
int result(int *avg)
{
    int m1,m2,m3;
    printf("Enter marks obtained in 3 subjects: \n");
    scanf("%d%d%d",&m1,&m2,&m3);
    *avg = (m1+m2+m3)/3;
    
}