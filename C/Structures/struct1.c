/* Structure example1 */
#include<stdio.h>
int main()
{
    char name[3];
    float price[3];
    int pages[3],i;
    printf("Enter name price and pages of three books\n");
    for(i=0;i<=2;i++)
    {
        scanf(" %c %f %d",&name[i],&price[i],&pages[i]);
    }
    printf("\nAnd this is what you have entered\n");
    for(i=0;i<=2;i++)
    {
        printf(" %c %f %d\n",name[i],price[i],pages[i]);
    }
    return 0;
}
