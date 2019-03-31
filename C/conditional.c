#include<stdio.h>
int main(){
    int yr;
    printf("Enter any year:\n");
    scanf("%d",&yr);

    yr%4==0||yr%400==0&&yr%100!=0 ? printf("LeapYear\n") : printf("Not a Leap Year\n"); 
} 