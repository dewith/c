/**
 * @file sizeof.c
 * @author Dewith Miramón
 *
 * Checking size of native data types.
 */

#include <stdio.h>

/**
 * @brief Main function to check the size in bytes of dtypes.
 * @return 0 on successful completion
 */
int main(void)
{
    int a = 5;
    int b = 7;
    int c = 6;
    double average = 0.0;
    char ch = 'e';

    printf("On my system:\n");
    printf("  char is %lu bytes\n", sizeof(ch));
    printf("  int is %lu bytes\n", sizeof(int));
    printf("  long int is %lu bytes\n", sizeof(long int));
    printf("  float is %lu bytes\n", sizeof(float));
    printf("  double is %lu bytes\n", sizeof(double));
    printf("  long double is %lu bytes\n", sizeof(long double));
    return 0;
}