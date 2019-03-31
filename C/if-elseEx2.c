#include<stdio.h>
int main(){
    int i=4,j=-1,k=0,w,x,y,z;
    w = i || j || k;    // w=1
    x = i && j && k;    // x=0
    y = i || j && k;    // y=1
    z = i && j || k;    // z=1

    printf("w = %d\nx = %d\ny = %d\nz = %d\n",w,x,y,z);
}