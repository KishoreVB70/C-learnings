#include <stdio.h>

int main() {
    int bot = 500;
    int* add = &bot;
    printf("Address of the variable: %p\n", add);
    printf("Value of the variable according to the pointer: %d\n", *add);
    *add = 10;
    printf("Value of the variable according to it: %d", bot);
    return 0;
}