/*
 * Program: Is it prime?
 * Author: Dewith
 * Date: 2025-05-04
 * Description: A program that evaluates an integer to know 
 * if it's a prime or not. 
 */

#include <stdio.h>
#include <math.h>


int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }

    // Check for divisibility from 3 up to the square root of n,
    // only through odd numbers
    int max_divisor = sqrt(num);
    for (int i = 3; i <= max_divisor; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int num = 3;
    int num_is_prime = is_prime(num);
    char *num_is_prime_str = num_is_prime ? "is" : "is not";
    printf("The number %d %s prime.\n", num, num_is_prime_str);
    return 0;
}