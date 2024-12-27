#include <stdio.h>
int main()
{
    float radius, area;
    printf("Radius = ?");
    scanf("%f", &radius);
    area=3.14*radius*radius;
    printf("Area = %f", area);
}