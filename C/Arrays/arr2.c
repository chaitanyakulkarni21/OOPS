/* Passing array elements to the function */
#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
    int arr[5],i;
    printf("Enter the array elements :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("display1: ");
    for(i=0;i<5;i++)
    {
        display1(arr[i]);
    }
    printf("\n");
    printf("display2: ");
    for(i=0;i<5;i++)
    {
        display2(&arr[i]);
    }
    printf("\n");
}
void display1(int m)
{
    printf("%d\t",m);
}
void display2(int *m)
{
    printf("%d\t",*m);
}