#include <stdio.h>

int main() {
    printf("enter the number of times to print a star: \n");
    int a;
    scanf("%d", &a);
    for (int i; i <= a; i++) {
        printf("*\n");
    }
}