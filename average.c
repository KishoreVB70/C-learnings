#include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    int myArray[20];
    printf("enter a total num of values to calculate\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("input the number %d\n", i);
        scanf("%d", &myArray[i]);
        sum+=myArray[i];
    }

    printf("average is: %d\n", sum/n);
    printf("Printing all the elements\n");

    for (int i; i < n; i++) {
        printf("%d\n", myArray[i]);
    }
    return 0;
}
