#include<stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    float radius;
    point center;
} circle;

int main()
{
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("Circle radius is %.2f, center is at (%d, %d)", c.radius, c.center.x, c.center.y);


    circle d = {4.5, {1, 3}};
    printf("\nCircle radius is %.2f, center is at (%d, %d)", d.radius, d.center.x, d.center.y);
    return 0;
}