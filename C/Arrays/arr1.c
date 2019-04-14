/* Array prog 1 */
#include<stdio.h>
int main()
{
    int marks[5],sum=0,i;
    printf("Enter marks in 5 subjects:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Marks entered : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }
    for (i=0;i<5;i++)
    {
        sum = sum + marks[i];
    }
    printf("\nSum = %d\n",sum);
    printf("Average = %d\n",sum/5);
}