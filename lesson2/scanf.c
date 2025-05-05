/*
 * Program: Custom Fibonacci
 * Author: Udacity
 * Date: 2025-05-05
 * Description: A program that prints the first n values of the fibonnacci 
 * sequenece but the n is an input in the consolse
 */


#include <stdio.h>

void fibonacci(const int n);

int main(){
    int n; 
    printf("How many values of the Fibonacci sequence to be printed: ");
    scanf("%d", &n);
    printf("Okay! Printing the first %d values:\n", n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n) {
    int second_last = 0;
    int last = 1;
    int current;
    printf("%d %d", second_last, last);
    for (int i = 2; i < n; i++) {
        int current = last + second_last;
        printf(" %d", current);
        second_last = last;
        last = current;
    }
    printf("\n");
}
