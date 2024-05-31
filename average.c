#include <stdio.h>

int main() {
    int n = 0;
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

    printf("average is: %.2lf\n", avg);
    printf("Printing all the elements\n");

    for (int i; i < n; i++) {
        printf("%d\n", myArray[i]);
    }
    return 0;
}
