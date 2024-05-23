#include <stdio.h>

int main() {
    int input;
    printf("enter number to be cubed: ");
    scanf("%d", &input);
    int cuber(int num) {
        return num * num * num;
    }
    printf(cuber(input));
}