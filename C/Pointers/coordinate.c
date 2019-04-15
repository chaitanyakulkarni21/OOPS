#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3, a, b, c, s, area;

    printf("Input x1: ");
    scanf("%f", &x1);

    printf("Input y1: ");
    scanf("%f", &y1);

    printf("Input x2: ");
    scanf("%f", &x2);

    printf("Input y2: ");
    scanf("%f", &y2);

    printf("Input x3: ");
    scanf("%f", &x3);

    printf("Input y3: ");
    scanf("%f", &y3);

    a = sqrt((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
    c = sqrt((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Distance between the two points A(x1, y1) and B(x2, y2) is : %.4f\n", a);
    printf("Distance between the two points B(x2, y2) and C(x3, y3) is : %.4f\n", b);
    printf("Distance between the two points C(x3, y3) and A(x1, y1) is : %.4f\n", c);
    printf("The area of triangle is %f\n", area);

    return 0;
}