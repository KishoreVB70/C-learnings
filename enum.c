#include <stdio.h>

#include <stdlib.h>


enum status {
  resolved = 4,
  rejected = 6  
}buildStatus;

int main() {
    buildStatus = resolved;
    printf("Status = %d\n", buildStatus);
    buildStatus = rejected;
    printf("Status = %d", buildStatus);
}