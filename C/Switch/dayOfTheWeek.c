#include<stdio.h>
int main(){
    int i;
    printf("Enter week number :\n");
    scanf("%d",&i);
    switch (i)
    {
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5: printf("Working Day\n");
                break;
        case 6:
        case 7: printf("Weekend\n");
            break;
    
        default: printf("Invalid week number\n");
            break;
    }
}