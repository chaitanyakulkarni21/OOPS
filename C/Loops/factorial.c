/* to find factorial of a number */

#include<stdio.h>
int main(){
    int f=1,i,n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        f=f*i;
    }
    printf("%d! = %d\n",n,f);
}