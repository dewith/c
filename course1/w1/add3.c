/*  Read three floats and print their sum
    Dewith Miramón
    May, 2022
*/

#include <stdio.h>

int main(void)
{
    float a, b, c, sum;

    printf("Enter three floats: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("You enterd %f %f %f\n", a, b);
    
    sum = a + b + c;
    printf("Sum: %f\n", sum);
    return 0;
}