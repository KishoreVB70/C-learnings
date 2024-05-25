#include <stdio.h>
int cuber(int num);
void isEven(int num);

int main() {
    int input;
    printf("enter number to be checked: ");
    scanf("%d", &input);
    isEven(input);
}

int cuber(int num) {
    return num * num * num;
}

void isEven(int num) {
    if (num % 2 == 0) {
        printf("even");
    } else if (num == 0 ) {
        printf("nither even nor odd");
    } else {
        printf("odd");
    }
}