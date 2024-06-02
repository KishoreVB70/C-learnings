#include <stdio.h>;
#include <stdlib.h>;

int main() {
    int *ptr, n = 0;

    printf("enter the num of int you want: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n*sizeof(int));

    if (ptr == NULL) {
        printf("Memory cannot be allocated");
        exit(0);
    }

    for (int i = 0; i < n; i ++ ) {
        *(ptr + i) = i;
    }

    free(ptr);

    return 0;
}