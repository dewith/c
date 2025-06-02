/*
 * Program: Sort User Inputs
 * Author: Dewith
 * Date: 2025-06-02
 * Description: An application that asks the user for 5 integers 
 * and prints those integers in ascending order
*/

#include <stdio.h>

void print_sorted(int numbers[], int size) {
    int i, j;
    int temp;

    // Bubble sort algorithm
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Numbers sorted: ");
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

int main(){
    int numbers[5];
    int i;

    printf("Please enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    print_sorted(numbers, 5);
    return 0;
}

