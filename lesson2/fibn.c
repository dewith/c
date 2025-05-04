/*
 * Program: Fibonacci sequence
 * Author: Dewith
 * Date: 2025-03-31
 * Description: A program that prints the first 15 values of 
 * the Fibonacci sequence.
 */

#include <stdio.h>

// Declared before main function 
void fibonacci(int sequence_length);

int main() {
    int sequence_length = 15;
    printf("The first 15 values of the fibonacci sequence:\n");
    fibonacci(sequence_length);
    return 0;
}

void fibonacci(int sequence_length) {
    int second_last = 0;
    int last = 1;
    int current;
    printf("%d %d", second_last, last);
    for (int i = 2; i < sequence_length; i++) {
        int current = last + second_last;
        printf(" %d", current);
        second_last = last;
        last = current;
    }
    printf("\n");
}
