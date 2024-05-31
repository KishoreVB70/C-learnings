#include <stdio.h>

int main() {
    // One dimensional array
    // int myArr[20] = {1,2,3,4,5};
    // myArr[0] = 0;
    // for (int i; i < 5; i++) {
    //     printf("%d", myArr[i]);
    // }

    //Multi dimensional array
    int multi[2][3][2] = {
        {
            {1,9}, {3,5}, {5,6}
        }, 
        {
            {7,8}, {2,10}, {11,12}

        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d", multi[i][j][k]);
            }
        }
    }
    return 0;
}
