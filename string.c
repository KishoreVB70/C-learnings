#include <stdio.h>

int main() {
    // Different ways of string initialization

    char c1[10] = "Hello moto";
    // Compiler will automatically assign the length of the array
    char c2[] = "Hello puffy";

    char c3[6] = {'b', 'e', 'r', 'n', 's', '\0'};
    char c4[] = {'b', 'e', 'r', 'n', 'a', '\0'};

    char name[40];

    // Scanf will only take till the space character
    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);

    // Though printf prints correctly, the professional way of printing string is puts
    printf("Your name is %s", name);
    puts(name);

}

