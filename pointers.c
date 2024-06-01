#include <stdio.h>

int main() {
    int bot = 500;
    int* add = &bot;
    printf("Address of the variable is: %p\n", add);
    printf("Value of the variable is: %d", *add);
    return 0;
}