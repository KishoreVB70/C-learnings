#include <stdio.h>

int factorial(int num1, int num2);

int main() {
    int num;
    int result = factorial(5,4);
    printf("Answer is: %d", result);
    return 0;
}

int factorial(int num1, int num2) {
    if(num2 == 1) {
        printf("2 obtained \n ");
        return 2;
    }
    printf("Two numbers are: %d and %d \n", num1, num2);
    int result =  factorial(num2, num2--) * num1;
    return result;
}