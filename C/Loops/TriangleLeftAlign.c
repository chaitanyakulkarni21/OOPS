#include<stdio.h>
int main(){
    int r,c,s,n;
    printf("Enter the number of rows :\n");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=n;s>=r;s--){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}