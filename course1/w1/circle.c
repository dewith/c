/* Compute area of a circle based on radius.
Dewith Miramón
May 10, 2024
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Radius of %lf meters; Area is %lf sq meters.\n", radius, area);
    return 0;
}