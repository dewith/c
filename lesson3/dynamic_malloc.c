/*
 * Program: Dynamic Memory Allocation
 * Author: Udacity
 * Date: 2025-06-07
 * Description: Demonstration of the use of dynamic memory allocation in C.
 */

#include <stdio.h>
#include <stdlib.h> // standard library for dynamic malloc

// function prototypes
double calculate_average(double*, int);

int main() {
    // declare number of sales and array for sales values
    int nofsales;
    double *sales;

    // get and store the number of sales from user 
    printf("Enter the number of sales: ");
    scanf("%d", &nofsales);

    // allocate memory for the sales array
    /* malloc() returns a void pointer, so we need to cast it to a double pointer
       the argument to malloc() is the number of bytes to allocate, which is
       the product of the number of elements (nofsales) and the size of each
       element (sizeof(double)) */
    sales = (double *) malloc(nofsales * sizeof(double));
    if (sales == NULL) {
        printf("Memory allocation failed\n");
        return 1; // exit program with error
    }

    // get and store the sales values from user
    for (int i = 0; i < nofsales; i++) {
        printf("Enter value of sale #%d: $", i + 1);
        scanf("%lf", &sales[i]);
    }

    // calculate and print the average of the sales values
    double average = calculate_average(sales, nofsales);
    printf("\nAverage of sales: $%.2lf\n", average);

    // print report 
    for (int i = 0; i < nofsales; i++) {
        printf(
            "| Sale #%d: $%.2lf ($%.2lf from average)\n", 
            i + 1, 
            sales[i], 
            sales[i] - average
        );
    }

    return 0;
}

double calculate_average(double *arr, int size) {
    // calculate the average of the array
    double sum = 0.0;
    for (int i= 0; i < size; i++) sum += arr[i];
    double average = sum / (double) size;
    return average;
}