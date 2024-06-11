#include <stdio.h>
#include <string.h>

struct Posting {
    char location[50];
    char role[50];

};

struct User {
    int userID;
    char lastName[50];
    int salary;
    struct Posting posting;
// One way of creating struct is that declaring the name after the struct itself
}priya;

typedef struct User2 {
    int userID;
    char lastName[50];
    int salary;
    struct Posting posting;
}user;


void displayUser(struct User us);
void displayaliasUser(user us);

int main() {
    user ranjina;
    ranjina.userID = 9;
    ranjina.salary = 0;
    strcpy(ranjina.posting.location, "Erode");
    strcpy(ranjina.posting.role, "Student");
    strcpy(ranjina.lastName, "Ranjith");

    priya.userID = 1;
    priya.salary = 30000;
    // strcopy must only be used to store string
    strcpy(priya.lastName, "Arjunan");
    strcpy(priya.posting.role, "Business developer");
    strcpy(priya.posting.location, "Banglore");

    // Another way of creating struct
    struct User divya;
    divya.userID = 5;
    divya.salary = 20000;
    strcpy(divya.lastName, "Divya");

    displayUser(priya);
    displayaliasUser(ranjina);
    return 0;
}

void displayUser(struct User us) {
    printf("Role of Priya: ");
    puts(us.posting.role);
}

void displayaliasUser(user us) {
    printf("Salary of Ranjina: %d \n", us.salary);
}