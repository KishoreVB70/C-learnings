#include <stdio.h>

int main() {
    printf("enter two number");
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int result = a > b;
    if (result == 1){
        printf("%d is greater than %d", a, b);
    } else {
        printf("%d is greater than %d", b, a);
    }

    return 0;
}