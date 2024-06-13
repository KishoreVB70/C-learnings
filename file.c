#include <stdio.h>
#include <stdlib.h>
void binFile();  
void textFile();  

int main() {
    binFile();

    return 0;
}

void binFile() {
    FILE *file = fopen("./file.bin", "wb");

    if(file == NULL) {
        printf("Error! ");
        exit(1);
    }

    int nu = 42;
    fwrite(&nu, sizeof(int), 1, file);
    
    fclose(file);
    int new;


    file = fopen("./file.bin", "rb");



    fread(&new, sizeof(int), 1, file);

    printf("New: %d", new);

    fclose(file);
}

void textFile() {
    FILE *file = fopen("./file.txt", "w");

    if(file == NULL) {
        printf("Error! ");
        exit(1);
    }

    fprintf(file, "It is %d ", 42);
    fclose(file);

    file = fopen("./file.txt", "a+");

    fprintf(file, "And another num is 52");
    fclose(file);

    file = fopen("./file.txt", "r");

    char big[70];
    fscanf(file, "%s", big);

    puts(big);
}