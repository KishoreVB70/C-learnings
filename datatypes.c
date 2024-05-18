#include <stdio.h>

int main() {
    int a;
    long b;
    short c;
    unsigned int d = -20;
    printf("size of a %lu \n", sizeof(a));
    printf("size of b %lu \n", sizeof(b));
    printf("size of c %lu \n", sizeof(c));
    printf("size of d %lu \n", sizeof(d));
    return 1;
}