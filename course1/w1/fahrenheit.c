/*Converts Fahrenheit to Celsius.
Dewith Miramón
May 19, 2024
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;

    printf("Please enter Fahrenheit (as integer): ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8; // Note conversion
    printf("> %dºF is %dºC\n", fahrenheit, celsius);

    return 0;
}