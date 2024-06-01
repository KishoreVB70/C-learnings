#include <stdio.h>

int main() {
    int bot = 500;
    int* add = &bot;
    printf("Address of the variable before value change: %p\n", add);
    printf("Value of the variable according to the pointer: %d\n", *add);
    bot = 20;
    printf("Address of the variable after value change: %p\n", add);
    printf("Value of the variable according to the pointer: %d\n", *add);
    printf("Value of the variable: %d", bot);
    return 0;
}