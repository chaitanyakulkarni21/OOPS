/* To determine whether an year is leap year or not */

#include<stdio.h>
int main(){
    int y;
    printf("Enter any year:\n");
    scanf("%d",&y);
    
    if(y%4==0 || y%400==0 && y%100!=0){
        printf("LeapYear\n");
    }else{
        printf("Not a Leap Year\n");
    }
}