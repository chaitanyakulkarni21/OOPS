#include<stdio.h>
void Italy();
void Brazil();
void Argentina();
int main()
{
    Italy();    
}

void Italy(){
    printf("Iam in Italy\n");
     Brazil();
}
void Brazil(){
    printf("Iam in Brazil\n");
    Argentina();
}
void Argentina()
{
    printf("Iam in Argentina\n");
}