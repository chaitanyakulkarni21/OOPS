/* Enter marks and calculate the percentage and Grade */

#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,tot;
    float per;
    char gr;

    printf("Enter marks in 5 subjects : \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    tot = m1+m2+m3+m4+m5;
    per = tot*100/500;
    if(per>=70 && per<100){
        printf("Grade = %c\n",'A+');
        printf("First Division\n");
    }else if(per >= 50 && per <70){
        printf("Grade = %c\n",'A');
        printf("Second Division\n");
    }else if(per >=40 && per<50){
        printf("Grade = %c\n",'B');
        printf("Third Division\n");
    }else{
        printf("FAIL!!\n");
    }
}