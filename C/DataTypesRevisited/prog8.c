/* Data types revisited prog 8 */
#include<stdio.h>
int x= 20;
void display();
int main()
{
    int x = 40;
    printf("Main value : %d\n",x);
    display();
}
void display()
{
    printf("Function Value : %d\n",x);
}