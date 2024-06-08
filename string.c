#include <stdio.h>
#include <string.h>

void mainStringStuff();
void stringFunctions();

int main() {
    stringFunctions();
}


void mainStringStuff() {
    // Different ways of string initialization

    char c1[10] = "Hello moto";
    // Compiler will automatically assign the length of the array
    char c2[] = "Hello puffy";

    char c3[6] = {'b', 'e', 'r', 'n', 's', '\0'};
    char c4[] = {'b', 'e', 'r', 'n', 'a', '\0'};

    char name[100];

    // Scanf will only take till the space character
    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);

    // Though printf prints correctly, the professional way of printing string is puts
    printf("Your name is %s", name);
    puts(name);

    // Printing out the address of all the elements
    printf("Address of name is %p\n", name);

    // Str
    for (int i = 0; i < strlen(name); i++) {
        printf("Address is %p\n", name + i);
        printf("value is: %c\n", * (name + i));
    }
}

void stringFunctions() {
    char name[] = "Berna";

    // Strlen
    int lengthOfName = strlen(name);
    printf("Length: %d\n", lengthOfName);

    //strcpy
    char copy[50];
    strcpy(copy, name);

    //strcmp
    int result = strcmp(copy, name);
    if (result == 0 ) {
        printf("Both are equal");
    }
    printf("Result: %d", result);

    //strcat
    //Adds the second into the first
    strcat(name, copy);
}
