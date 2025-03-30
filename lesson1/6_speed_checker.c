#include <stdio.h>

int main() {
    int speed_limit = 60;
    int current_speed = 96;

    if (current_speed > speed_limit) {
        printf("The current speed of %d km/h is too high.\n", current_speed);
    } else {
        printf("The current speed of %d km/h is within limits.\n", current_speed);
    }

    return 0;
}