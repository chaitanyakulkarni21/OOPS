/*  WAP to determine whether an entered number is odd or even */

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
}