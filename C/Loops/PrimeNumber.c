/* Prime Number */

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("Not a prime number\n");
            break;
        }
        
    }
    if(i==n){
        printf("Prime Number\n");
    }
}