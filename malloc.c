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
        printf("The %d element address is %p\n", i, (ptr+i));
    }

    printf("Do you want to resize the array?, press 0 for yes: ");

    int ans;
    scanf("%d", &ans);

    if (ans != 0 ) {
        printf("thankyou");
        exit(0);
    }

    int n2;
    printf("enter the new num of elments: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, sizeof(int) * n2);

    for (int i = 0; i < n2; i ++) {
        printf("enter the %d element: ", i);
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < n2; i ++) {
        printf("The %d element address is %p\n", i, (ptr+i));
    }

    free(ptr);

    return 0;
}