#include <stdio.h>
#include "movement.h"

void move(const char* name, Movement movement, unsigned short amount) {
    printf("Name: %s\n", name);
    switch (movement) {
        case FORWARD:
            printf("Movement: Forward\n");
            break;
        case REVERSE:
            printf("Movement: Reverse\n");
            break;
    }
    printf("Amount: %u\n", amount);
}

void turn(const char* name, Direction direction, unsigned short amount) {
    printf("Name: %s\n", name);
    switch (direction) {
        case LEFT:
            printf("Direction: Left\n");
            break;
        case RIGHT:
            printf("Direction: Right\n");
            break;
    }
    printf("Amount: %u\n", amount);
}
