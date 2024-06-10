#include <stdio.h>

struct Mine {
    int number;
    float noomber;
    double noooomber;
    char hi;
// One way of creating struct is that declaring the name after the struct itself
}boteson;

int main() {
    boteson.hi = 'a';
    boteson.number = 1;
    boteson.noomber = 5.2;
    boteson.noooomber = 5.23145;

    // Another way of creating struct
    struct Mine bot;
    bot.hi = 'a';
    bot.number = 1;
    bot.noomber = 5.2;
    bot.noooomber = 5.23145;




    printf("my char: %c\n", bot.hi);
    printf("my number: %d\n", bot.number);
    printf("my noomber: %f\n", bot.noomber);
    printf("my noooomber: %f", bot.noooomber);
    
    return 0;
}