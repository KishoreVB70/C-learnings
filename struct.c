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
    int age;
    struct Posting posting;
}user;


void displayUser(struct User us);
void displayaliasUser(user us);
void displayPointerUser(user* us);
struct User returnUser();
user returnAliasUser();
user *returnPointerUser();



int main() {
    user ranjina = returnAliasUser();

    priya.userID = 1;
    priya.salary = 30000;
    // strcopy must only be used to store string
    strcpy(priya.lastName, "Arjunan");
    strcpy(priya.posting.role, "Business developer");
    strcpy(priya.posting.location, "Banglore");

    // Another way of creating struct
    struct User divya = returnUser();

    // Using pointer
    // This is not possible since, after the function execution, the memory is freed
    // user *berns = returnPointerUser();

    user *berns, berna;
    // Store the address of the struct into the pointer
    berns = &berna; 
    berns->age = 22;
    strcpy(berns->lastName, "Melben");
    displayPointerUser(berns);

    printf("User id of divya %d\n", divya.userID);
    displayUser(priya);
    displayaliasUser(ranjina);
    return 0;
}

void displayUser(struct User us) {
    printf("Role of Priya: ");
    puts(us.posting.role);
}

void displayaliasUser(user us) {
    printf("Location of Ranjina: ");   
    puts(us.posting.location);
}

void displayPointerUser(user* us) {
    printf("Last name of Berna: ");   
    puts(us->lastName);

}

struct User returnUser() {
    struct User divya;
    divya.userID = 5;
    divya.salary = 20000;
    strcpy(divya.lastName, "Divya");
    return divya;
}

user returnAliasUser() {
    user ranjina;
    ranjina.userID = 9;
    ranjina.salary = 0;
    strcpy(ranjina.posting.location, "Erode");
    strcpy(ranjina.posting.role, "Student");
    strcpy(ranjina.lastName, "Ranjith");
    return ranjina;
}

// Not working correctly
// I think it is because, the memory allocated in this function will be freeded after the function execution
// It is because we are not returning the variable, but we are returing the pointer to the address
user *returnPointerUser() {
    // defining the type of the pointer to be user
    user *berns, berna;
    // Store the address of the struct into the pointer
    berns = &berna; 
    berns->age = 22;
    strcpy(berns->lastName, "Melben");
    return berns;
}



// int addUserID() {

// }