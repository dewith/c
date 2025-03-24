#include <stdio.h>

int main() {
    int my_even = 10;
    int my_even_doubled = my_even << 1;
    int my_even_halved = my_even >> 1;
    printf("%d: doubled=%d halved=%d\n", my_even, my_even_doubled, my_even_halved);
    return 0;
}