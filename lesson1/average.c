#include <stdio.h>

int main() {
    int x, y, z;
    x = 4; 
    y = 8;
    z = 16;

    float average;
    average = (float) (x + y + z) / 3;

    printf("The average is %.2f\n", average);
    return 0;
}