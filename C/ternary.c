#include<stdio.h>
int main(){
    
    int a,b,c,big;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b ? (a>c ? printf("%d\n",a) : printf("%d\n",c)) : (b>c ? printf("%d\n",b) : printf("%d\n",c)));
}