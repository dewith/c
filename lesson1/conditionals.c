#include <stdio.h>

int main() {
    int num = 4;

    if (num % 2 == 0) {
        printf("[IF/ELSE] This integer (%d) is even\n", num);
    } else {
        printf("[IF/ELSE] This integer (%d) is odd\n", num);
    }

    printf("[TERNARY] This integer (%d) is %s\n", num, num % 2 == 0 ? "even" : "odd");

    switch (num % 2) {
        case 0:
            printf("[SWITCH] This integer (%d) is even\n", num);
            break;
        default:
            printf("[SWITCH] This integer (%d) is odd\n", num);
            break;
    }

    return 0;
}