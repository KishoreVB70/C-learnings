#include <stdio.h>

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("the number is %d \n", number);
    float boten;
    printf("multiple inputs, first enter a int then a float \n");
    scanf("%d%f", &number, &boten);
    printf("number: %d, float: %f", number, boten);

}