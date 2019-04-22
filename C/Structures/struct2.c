/* Actual use of structures */
#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1,b2,b3;
    printf("\nEnter name price and number of pages of book1:\n");
    scanf(" %c %f %d",&b1.name,&b1.price,&b1.pages);
    //fflush(stdin);
    printf("\nEnter name price and number of pages of book2:\n");
    scanf(" %c %f %d",&b2.name,&b2.price,&b2.pages);
  //  fflush(stdin);
    printf("\nEnter name price and number of pages of book3:\n");
    scanf(" %c %f %d",&b3.name,&b3.price,&b3.pages);
//fflush(stdin);
    printf("\nThe details of first book are : \n");
    printf("Name : %c\nPrice : %.2f\nNumber of Pages : %d\n",b1.name,b1.price,b1.pages);

    printf("\nThe details of second book are : \n");
    printf("Name : %c\nPrice : %.2f\nNumber of Pages : %d\n",b2.name,b2.price,b2.pages);

    printf("\nThe details of third book are : \n");
    printf("Name : %c\nPrice : %.2f\nNumber of Pages : %d\n",b3.name,b3.price,b3.pages);
}