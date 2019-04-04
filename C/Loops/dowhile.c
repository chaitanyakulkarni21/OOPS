#include<stdio.h>
int main(){
    int i=1,n,p=1;
    char ch;
    do{
        printf("Enter a number you want to print the table : \n");
        scanf("%d",&n);
        printf("Table for %d : \n",n);
        for(i=1;i<=10;i++){
             p = n * i;
            printf("%d x %d = %d\n",n,i,p);
        }
        printf("Do you wish to continue ? \n");
        scanf("%c",&ch);
    }while(ch != 'n');
}