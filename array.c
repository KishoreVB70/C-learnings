#include <stdio.h>

int main() {
    // One dimensional array
    // int myArr[20] = {1,2,3,4,5};
    // myArr[0] = 0;
    // for (int i; i < 5; i++) {
    //     printf("%d", myArr[i]);
    // }

    //Multi dimensional array
    int multi[2][3] = {{1,2,3}, {4,5,222}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", multi[i][j]);
        }
    }

    return 0;
}
