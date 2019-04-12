/* If the three lengths of a triangle are denoted by a,b,c 
then area of triangle is given by 
area = sqrt(s(s-a)(s-b)(s-c))
where s = (a+b+c)/2 */
#include<stdio.h>
#include<math.h>
void areaTriangle(int *);
int main()
{
    int a;   
    areaTriangle(&a);
    printf("Area of triangle is : %d\n",a);
    return 0;
}
void areaTriangle(int *ar)
{
    int a,b,c,s;
    printf("Enter three sides of a triangle: \n");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    *ar = sqrt(s*(s-a)*(s-b)*(s-c));
}
