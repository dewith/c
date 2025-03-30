/*
 * Program: Rectangle Printer
 * Author: Dewith
 * Date: 2025-03-30
 * Description: This program prints a rectangle of asterisks to the console
 * using both while and for loops.
 */

#include <stdio.h>

int main() {
    // Define rectangle dimensions
    int rectangle_height = 10;
    int rectangle_width = 10;

    printf("Printed with While loop:\n");
    int height_counter = 0;
    while (height_counter < rectangle_height) {
        int width_counter = 0;
        while (width_counter < rectangle_width) {
            printf("* ");
            width_counter++;
        }
        printf("\n");
        height_counter++;
    }

    printf("\nPrinted with For loop:\n");
    for (int i = 0; i < rectangle_height; i++) {
        for (int j = 0; j < rectangle_width; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}