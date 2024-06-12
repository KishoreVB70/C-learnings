#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("./file.txt", "w");

    if(file == NULL) {
        printf("Error! ");
        exit(1);
    }

    fprintf(file, "Number is %d", 42);
    fclose(file);

    FILE *fle = fopen("./file.txt", "a");

    fprintf(fle, "And another num is 52");
    fclose(fle);

    return 0;
}