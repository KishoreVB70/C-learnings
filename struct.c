#include <stdio.h>
struct nullPointer {
    int number;
    float noomber;
    double noooomber;
    char hi;
}boteson;

int main() {
    boteson.hi = 'a';
    boteson.number = 1;
    boteson.noomber = 5.2;
    boteson.noooomber = 5.23145;

    printf("my char: %c\n", boteson.hi);
    printf("my number: %d\n", boteson.number);
    printf("my noomber: %f\n", boteson.noomber);
    printf("my noooomber: %f", boteson.noooomber);
    
    return 0;
}