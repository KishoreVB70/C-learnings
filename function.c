#include <stdio.h>
int cuber(int num);
void isEvenNoArgumentNoReturn();
void isEvenNoReturn(int num);
char isEvenNoArgument();
char isEven(int num);

int main() {
    // First function
    printf("Running the first function void of any arguments and return type\n");
    isEvenNoArgumentNoReturn();
    printf("\nEnd of the first function\n");

    // Second function
    printf("Running the second function void of any arguments but with a return type\n");
    char noArgument = isEvenNoArgument();
    printf("result of the No argument function is %c \n", noArgument);

    // Get the input 
    printf("Now you need to give just one input number for the next 2 functions\n");
    int input;
    printf("Enter number to be checked: ");
    scanf("%d", &input);

    // Third function
    printf("Start of the function with no return but an argument\n");
    isEvenNoReturn(input);
    printf("\nfunction with no return ends\n");

    // Fourth function
    printf("Start of the full function with both the return and the argument\n");
    char full = isEven(input);
    printf("result of the full function is %c \n", full);

    // End
    printf("End of all functions");
    return 0;
}

// Function with no argument and no return type
void isEvenNoArgumentNoReturn() {
    int num;
    printf("Enter number to be checked: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("even");
    } else if (num == 0 ) {
        printf("nither even nor odd");
    } else {
        printf("odd");
    }
}

// Function that doesn't return anything
void isEvenNoReturn(int num) {
    if (num % 2 == 0) {
        printf("even");
    } else if (num == 0 ) {
        printf("nither even nor odd");
    } else {
        printf("odd");
    }
}

// Function with return but doesn't have argument 
char isEvenNoArgument() {
    int num;
    printf("enter number to be checked: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        return 'e';
    } else if (num == 0 ) {
        return '0';
    } else {
        return 'o';
    }
}

// Function with both argument and return
char isEven(int num) {
    if (num % 2 == 0) {
        return 'e';
    } else if (num == 0 ) {
        return '0';
    } else {
        return 'o';
    }
}
