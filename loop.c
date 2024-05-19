#include <stdio.h>

int main() {
    printf("enter the number of times to print a star: \n");
    int a;
    scanf("%d", &a);

    // Modified function where the highest number of stars to print is 5
    // User can input anything, but 10 is the max
    for (int i; i < a; i++) {
        if (i == 5) {
            break;
        }
        printf("*\n");
    }
    // int i = 0;
    // while (i < a) {
    //     printf("*\n");
    //     i++;
    // }
    // do {
    //     printf("*\n");
    //     i++;
    // }
    // while(i < a);
}