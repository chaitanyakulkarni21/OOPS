/* loops counter can even be float */

#include<stdio.h>
int main(){
    float a = 10.0;
    while(a<=10.5){
        printf("Rain drops on roses\n");
        printf("...and whiskers on kittens\n");
        a=a+0.1;
    }
}