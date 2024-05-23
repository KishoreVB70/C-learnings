#include <stdio.h>
int cuber(int num);

int main() {
    int input;
    printf("enter number to be cubed: ");
    scanf("%d", &input);
    int output = cuber(input);
    printf("%d", output);
}

int cuber(int num) {
    return num * num * num;
}