#include<stdio.h>
int main()
{
    int a,b,c,d,p,r,q;
    char n;
    printf("Choose an Operation: \n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    scanf("\n%c",&n);  

    switch(n){
        case '+' : printf("Enter two numbers: \n");
                   scanf("%d%d",&a,&b);
                   c = a + b ;
                   printf("Sum = %d\n",c);
                   break;
        case '-' : printf("Enter two numbers: \n");
                   scanf("%d%d",&a,&b);
                   d = a - b ;
                   printf("Difference = %d\n",d);
                   break;
        case '*' : printf("Enter two numbers: \n");
                   scanf("%d%d",&a,&b);
                   p = a * b ;
                   printf("Product = %d\n",p);
                   break;
        case '/' : printf("Enter two numbers: \n");
                   scanf("%d%d",&a,&b);
                   if(b==0){
                       printf("Division by 0 is not possible\n");
                       break;
                   } else {
                    q = a / b ;
                    printf("Quotient = %d\n",q);
                   }
                   break;
        case '%' : printf("Enter two numbers: \n");
                   scanf("%d%d",&a,&b);
                   if(b==0){
                       printf("Division by 0 is not possible\n");
                   } else {
                    r = a / b ;
                    printf("Remainder = %d\n",r);
                   }
                   break;
        default: printf("No such Operation is Available\n");
    }
}