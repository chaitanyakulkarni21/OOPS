extern int i;
int fun1()
{
    i++;
    printf("Inside fun1: %d\n",i);
    return 0;
}
int fun2()
{
    i++;
    printf("Inside fun2: %d\n",i);
    return 0;
}