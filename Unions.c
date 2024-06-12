#include <stdio.h>
#include <string.h>

union Worker {
    char name[30];
    int age;
}priya, ranjina;

int main() {

    ranjina.age = 23;
    strcpy(ranjina.name, "Ranjina Ranjith");

    strcpy(priya.name, "Priya Arjunan");
    priya.age = 22;

    printf("Age of priya: %d\n", priya.age);

    // This would be rubbish value
    printf("Age of ranjina: %d\n", ranjina.age);

    printf("Name of ranjina: ");
    puts(ranjina.name);

    // This would be rubbish value
    printf("Name of priya: ");
    puts(priya.name);

    return 0;
}
