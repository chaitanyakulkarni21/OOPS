#include<stdio.h>
void printTable(int);
int main(){
    int n;
    printf("Enter the number you want to print the table for: \n");
    scanf("%d",&n);
    printf("Table for %d \n",n);
    printTable(n);
}

void printTable(int a){
    int i;

    for (i=0;i<11;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}