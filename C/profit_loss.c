#include<stdio.h>
int main(){
    int sp,cp,p,l;
    printf("Enter Cost price : \n");
    scanf("%d",&cp);
    printf("Enter Selling price: \n");
    scanf("%d",&sp);
    if(cp>sp)
        printf("Loss\n");
    else
        printf("Profit\n");
}