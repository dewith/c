/**
 * @file declarations.c
 * @author Dewith Miramón
 * 
 * Fundamental Types Declaration and Assignment
 */

/**
 * @brief Main function to calculate the average of three numbers.
 *
 * This function initializes three integer variables, calculates their average,
 * and prints the result.
 *
 * @return 0 on successful completion
 */
int main(void)
{
    // declare and initialize
    int a = 5; 
    int b = 7;
    int c = 6;
    double average = 0.0;  // good practice

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    average = (a + b + c) / 3.0; // conversion fix
    printf("average = %lf\n", average);

    return 0;
}
