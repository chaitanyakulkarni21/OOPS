#include<stdio.h>
int main(){
    int i = -1,j = 1,k,l;
    k = !i && j;    // k = 0
    l = !i || j;    // l = 1
    printf("i = %d\nj = %d\n",i,j); // i = -1, j = 1
}