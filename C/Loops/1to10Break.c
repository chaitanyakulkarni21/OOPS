/* Break Statement */
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }

    printf("\n");

    for(i=1;i<=10;i++){
        printf("%d\t",i);
        if(i==5)
         break;
    }
    printf("Here i becomes 5...Out of for loop\n");
}