/* String Exercise 2 prob3 */
#include<stdio.h>
int main()
{
    char arr[8] = "Rhombus";
    int i;
    for(i=0 ; i<=7 ; i++)
    {
        printf("%d ",*arr);
    }
   // arr++;  // lvalue required error
    return 0;
}