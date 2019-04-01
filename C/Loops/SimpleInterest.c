/* Calculation of Simple Interest for 3 sets of n,p,r */

#include<stdio.h>
int main(){
    int p,r,n,si,i;
    for(i=0;i<=2;i++){
        printf("Enter principle, rate of interest and years:\n");
        scanf("%d%d%d",&p,&n,&r);
        si = (p*n*r)/100;
        printf("Simple Interest = %d\n",si);
    }
}