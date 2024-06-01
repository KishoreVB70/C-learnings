#include <stdio.h>
int printAddressOfArray(int arr[], int size);


int main() {
    int arr[] = {1,2,3,4,5};
    printf("Address of the array in main function: %p\n", &arr);
    printf("The value which is stored in the addres is %p\n", arr);
    printAddressOfArray(arr, 5);

    return 0;
}

int printAddressOfArray(int arr[], int size) {
    printf("The address of the array itself is %p\n", &arr);
    printf("The value stored in the array thing is %p\n", arr);
    printf("The value which is stored in the addres is %d\n", *arr);

    for (int i = 0; i < size; i++) {
        printf("Value of element %d is %d, and the address is %p\n", i, arr[i], &arr[i]);
    }
}