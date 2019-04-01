#include<stdio.h>
int main(){
    float x = 1.1 ;
    printf("%d\n",(x ==1.1f));
    while(x == 1.1f){
        printf("%f\n",x);
        x = x - 0.1;
    }
}