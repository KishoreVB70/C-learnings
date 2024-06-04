#include <stdio.h>
#include <stdlib.h>


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
        printf("Enter the %d element: \n", i);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < n; i ++) {
        printf("The %d element of the array is %d\n", i, *(ptr+i));
    }

    free(ptr);

    return 0;
}