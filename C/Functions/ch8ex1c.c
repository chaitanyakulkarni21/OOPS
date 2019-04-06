/*To calculate the area of circle */
#include<stdio.h>
float circlearea(int);
int main()
{
	int radius;
	float area;
	printf("Enter radius of the circle\n");
	scanf("%d",&radius);
	area = circlearea(radius);
	printf("Area = %.2f",area);
}
float circlearea(int r)
{
	float a;
	a = 3.14 * r * r;
	return a;
}
