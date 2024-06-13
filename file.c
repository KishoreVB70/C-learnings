#include <stdio.h>
#include <stdlib.h>
void binFile();  
void textFile();  

int main() {
    // binFile();
    textFile();

    return 0;
}

void binFile() {
    FILE *file = fopen("./file.bin", "wb+");

    if(file == NULL) {
        printf("Error! ");
        exit(1);
    }

    int nu = 42;
    int newNu;

    fwrite(&nu, sizeof(int), 1, file);


    // Once after we write something to the file, the pointer in the file
    // is at the last, so previous data can't be read
    rewind(file);

    fread(&newNu, sizeof(int), 1, file);

    printf("New: %d", newNu);

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

    rewind(file);

    char big[70];
    fgets(big, sizeof(big), file);
    puts(big);
    fclose(file);
}