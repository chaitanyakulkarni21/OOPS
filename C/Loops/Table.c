#include<stdio.h>
int main(){
    int p,i=1,j;
    
    while(i<=10){
        j=1;
        
        while(j<=10){
            
            p = i * j;
            printf("%d x %d = %d\n",i,j,p);
            j++;
            
        }
        if(i>5){
            break;
        }
        printf("#################\n");
        i++;
    }
}