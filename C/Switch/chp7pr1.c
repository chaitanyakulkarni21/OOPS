#include<stdio.h>
int main(){
    int i;
    printf("Enter a case number :\n");
    scanf("%d",&i);
    switch(i){
        case 1 : printf("Iam in case 1\n");
                 break;
        case 2 : printf("Iam in case 2\n");
                 break;
        case 3 : printf("Iam in case 3\n");
                 break;
        case 4 : printf("Iam in case 4\n");
                 break;
        default : printf("Iam in default\n");
    }
}