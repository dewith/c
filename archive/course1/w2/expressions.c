/* 
Expression Evaluation
Dewith Miramón
Jun. 4, 2024
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; //initialize
    c = a - b;
    printf("1) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    c = b - a;
    printf("2) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    c = a / b;
    d = b / a;
    printf("3) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    c = a % b;
    d = b % a;
    printf("4) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    c = -a - b;
    d = -b - a;
    printf("5) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    c = ++a + b++;
    d += 5;
    printf("6) a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    return 0;
}