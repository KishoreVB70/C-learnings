#include <stdio.h>

int main() {
    int myArr[20] = {1,2,3,4,5};
    myArr[0] = 0;
    for (int i; i < 5; i++) {
        printf("%d", myArr[i]);
    }
    return 0;
}
