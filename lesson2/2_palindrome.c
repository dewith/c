/*
 * Program: Is it a palindrome?
 * Author: Dewith
 * Date: 2025-05-04
 * Description: A program that evaluates if a string is a palindrome
 */

#include <stdio.h>

int is_palindrome(char* string) {
    printf("Checking palindromeness of '%s'\n", string);
    int left_index = 0;
    int right_index = 0;
    for (int i = 0;; i++){
        if (string[i] == '\0') {
            right_index = i - 1;
            break;
        }
    }
    printf("Left index: %d\n", left_index);
    printf("Right index: %d\n", right_index);

    for (int i = 0; i <= right_index; i++){
        char char_left = string[left_index + i];
        char char_right = string[right_index - i];
        printf("Checking [%d] left/right: '%c' == '%c'\n", i, char_left,  char_right);
        if (char_left != char_right) return 0;
    }
    return 1;
}

int main() {
    char *string = "nursesrun";
    int string_is_palindrome = is_palindrome(string);
    printf(
        "The string `%s` %s a palindrome.\n", 
        string, 
        string_is_palindrome ? "is" : "is not"
    );
    return 0;
}