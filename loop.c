#include <stdio.h>

int main() {
    printf("enter the number of times to print a star: \n");
    int a;
    scanf("%d", &a);

    // Modified function where the highest number of stars to print is 10
    // User can input anything, but 10 is the max
    // for (int i; i < a; i++) {
    //     if (i == 10) {
    //         break;
    //     }
    //     printf("*\n");
    // }

    // Another function to demonstrate continue

    for (int i = 1; i <= a; i++) {
        // Will print till 10
        if(i == 11) {
            break;
        }
        // Will not print the num 4
        if(i == 4) {
            continue;
        }
        printf("%d\n", i);
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