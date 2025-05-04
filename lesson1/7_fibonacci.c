/*
 * Program: Fibonacci sequence
 * Author: Dewith
 * Date: 2025-03-30
 * Description: A program that prints the first 10 values of the Fibonacci sequence 
 * using two different methods: a while loop, and a for loop.
 */

#include <stdio.h>

int main() {
    // The first n values to be printed
    int n_len = 10;
    int n_minus_1, n_minus_2;

    // Using a while loop
    n_minus_2 = 0;
    n_minus_1 = 1;
    int printed_len = 2;
    printf("[WHILE] Fibonacci first %d values: %d, %d", n_len, n_minus_2, n_minus_1);
    while (printed_len < n_len) {
        int n = n_minus_1 + n_minus_2;
        printf(", %d", n);
        n_minus_2 = n_minus_1;
        n_minus_1 = n;
        printed_len++;
    }

    // Using a for loop
    n_minus_2 = 0;
    n_minus_1 = 1;
    printf("\n[FOR] Fibonacci first %d values: %d, %d", n_len, n_minus_2, n_minus_1);
    for (int i = 2; i < n_len; i++) {
        int n = n_minus_1 + n_minus_2;
        printf(", %d", n);
        n_minus_2 = n_minus_1;
        n_minus_1 = n;
    }
    printf("\n");

    return 0;
}