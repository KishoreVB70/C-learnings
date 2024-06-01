#include <stdio.h>

int main() {
    int bot = 500;
    int* add = &bot;
    printf("Address of the variable is: %p", add);
    return 0;
}