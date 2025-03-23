/* The distance of a marathon in kilometers
Dewith Miramón
May 19, 2024
*/

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometeres.\n\n", kilometers);
    return 0;
}