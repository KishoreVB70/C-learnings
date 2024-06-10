#include <stdio.h>
#include <string.h>

struct User {
    int userID;
    char lastName[50];
    int salary;
// One way of creating struct is that declaring the name after the struct itself
}priya;

typedef struct User2 {
    int userID;
    char lastName[50];
    int salary;
}user;

int main() {
    user ranjina;
    ranjina.userID = 9;
    ranjina.salary = 0;
    strcpy(ranjina.lastName, "Ranjith");

    priya.userID = 1;
    priya.salary = 30000;
    // strcopy must only be used to store string
    strcpy(priya.lastName, "Arjunan");

    // Another way of creating struct
    struct User divya;
    divya.userID = 5;
    divya.salary = 20000;
    strcpy(divya.lastName, "Divya");

    printf("Salary of Ranjina: %d \n", ranjina.salary);
    printf("Last name of Priya: ");
    puts(priya.lastName);
    
    return 0;
}