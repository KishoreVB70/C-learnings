#include <stdio.h>
#include <stdlib.h>

int *pointerfindLargest(int n);

int main() {
    int n;
    printf("enter the num of elements: ");
    scanf("%d", &n);

    // Obtaining the address of the first element of the array
    int *results = pointerfindLargest(n);
    printf("The largest number is: %d\n", *results);
    printf("The largest index is %d", *(results+1));
    return 0;
}

int *pointerfindLargest(int n) {
    int largest = 0;
    int largestIndex;

    int *ptr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i);
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
            largestIndex = i;
        }
    }

    // Free the array as it is no more needed
    free(ptr);

    // Static variable as the storage will be freeded after the execution of the function
    static int arr[2];
    arr[0] = largest;
    arr[1] = largestIndex;

    // Returning the address of the first element of the array
    return arr;
}
