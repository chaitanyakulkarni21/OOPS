#include<stdio.h>
int main()
{
    int a= 5, *ptr;
    ptr = &a;
    printf("Enter a number : \n");
    scanf("%d",ptr);
    printf("%d %d\n",a,*ptr);
    return 0;
}