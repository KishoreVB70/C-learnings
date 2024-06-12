#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("./puffy.txt", "w");

    if(file == NULL) {
        printf("Error! ");
        exit(1);
    }

    fprintf(file, "Number is %d", 42);
    fclose(file);

    return 0;
}