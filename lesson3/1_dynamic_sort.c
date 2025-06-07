/*
 * Program: Dynamic Sorting
 * Author: Dewith
 * Date: 2025-06-07
 * Description: A program that sorts a user-defined number of integers 
 * inputted by the user in ascending order
 */

#include <stdio.h>
#include <stdlib.h>

// function prototypes
void bubble_sort_array(int*, int);
void print_array(int*, int);


int main() {
    int nofints;
    int *user_ints;

    // ask the user the number of integers they wish to input
    printf("How many intergers do you want to input? ");
    scanf("%d", &nofints);

    // dynamically allocate memory to store the integers
    user_ints = (int *) malloc(nofints * sizeof(int));
    if (user_ints == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // take the inputs from the user 
    for (int i = 0; i < nofints; i++) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &user_ints[i]);
    }

    // sort the array in ascending order
    bubble_sort_array(user_ints, nofints);

    // print the results
    printf("Sorted array: ");
    print_array(user_ints, nofints);

    // free the allocated memory
    free(user_ints);

    return 0;
}


void bubble_sort_array(int *arr, int size) {
    /*
     * Bubble sort algorithm
     * 1. Iterate through the array
     * 2. Compare each pair of adjacent elements
     * 3. Swap if they are in the wrong order
     * 4. Repeat until the array is sorted
     */
    
    int temp;

    printf("\nBubble sorting array...\n");
    for (int i = 0; i < size - 1; i++) {
        printf("| Pass %d) ", i + 1);
        printf("Comparing index %d to %d\n", 0, size - 1 - i);
        
        for (int j = 0; j < size - 1 - i; j++) {
            printf("|   Comparing %d and %d", arr[j], arr[j + 1]);
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] =  temp;
                printf(" -> Swap!\n");
            } else {
                printf("\n");
            }
        }

        printf("|   -> ");
        print_array(arr, size);
    }
    printf("\n");
}


void print_array(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}