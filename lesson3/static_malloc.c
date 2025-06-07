/*
 * Program: Static Memory Allocation
 * Author: Udacity
 * Date: 2025-06-04
 * Description: Demonstration of the use of static memory allocation in C.
 */

#include <stdio.h>
#define MAX_SIZE 100

// function prototypes
void get_sales_count(int*);
double calculate_average(double*, int);

int main() {
    // declare number of sales and array for sales values
    int nofsales;
    double sales[MAX_SIZE];

    // get and store the number of sales from user 
    printf("Enter the number of sales: ");
    get_sales_count(&nofsales);

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

void get_sales_count(int *nofsales) {
    // get the number of sales from user
    scanf("%d", nofsales);
    while (*nofsales < 1 || *nofsales > MAX_SIZE) {
        printf("Number of sales must be between 1 and %d: ", MAX_SIZE);
        scanf("%d", nofsales);
    }
}


double calculate_average(double *arr, int size) {
    // calculate the average of the array
    double sum = 0.0;
    for (int i= 0; i < size; i++) sum += arr[i];
    double average = sum / (double) size;
    return average;
}