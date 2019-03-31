#include<stdio.h>
int main(){
    int i;
    printf("Enter either 1 or 2:\n");
    scanf("%d",&i);
    if(i==1){
        printf("You will go to heaven\n");
    } else{
        if(i==2){
            printf("Hell was created with you in mind\n");
        }else {
            printf("How about mother earth\n");
        }
    }
}