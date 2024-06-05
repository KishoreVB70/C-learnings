#include <stdio.h>
#include <stdlib.h>

double pointerAverage(int n);
double normalAverage(int n);

int main() {
    int n;
    printf("enter the num of elements: ");
    scanf("%d", &n);

    double avg = pointerAverage(n);
    printf("average is: %.1f", avg);
    return 0;
}

double normalAverage(int n) {
    int sum = 0;
    int myArray[20];
    double avg;
    printf("enter a total num of values to calculate\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("input the number %d\n", i);
        scanf("%d", &myArray[i]);
        sum+=myArray[i];
    }

    // Data type casting of sum variable from int to double 
    avg = (double) sum/n;
    return avg;
}

double pointerAverage(int n) {
    double avg;
    int sum;
    int *ptr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element: ", i);
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    free(ptr);
    avg = (double) sum/n;
    return avg;
}
