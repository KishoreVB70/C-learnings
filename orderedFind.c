#include <stdio.h>

int main() {
    int nums[5]  = {1,2,3,4,5};
    // Implementing split sort
    int find = 1;
    int spareNum = sizeof(nums);
    printf("size is %lu\n", sizeof(nums));
    for (long x = 0; x < sizeof(nums)/2; x++) {
        if (spareNum == 1) {
            printf("found: %d", nums[0]);
        }

        if(nums[spareNum/2] == find ) {
            printf("found: %d", nums[spareNum/2]);
        }

        spareNum = (sizeof(nums)/2);
        printf("end of round %lu", x);
    }
}