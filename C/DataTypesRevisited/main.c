#include<stdio.h>
int i = 3;
int fun1();
int fun2();
int main()
{
    printf("In Main: %d\n",i);
    fun1();
    fun2();
    return 0;
}