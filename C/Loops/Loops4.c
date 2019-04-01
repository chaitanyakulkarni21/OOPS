#include<stdio.h>
int main(){
    int x=4,y,z;
    y = --x;    // x = 3 y = 3
    z = x--;    // z = 3 x = 2
    printf("%d %d %d\n",x,y,z); // 2 3 3 
}