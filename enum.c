#include <stdio.h>

#include <stdlib.h>


enum status {
  resolved = 200,
  rejected = 400  
}buildStatus;

int main() {
    buildStatus = resolved;
    printf("Status = %d\n", buildStatus);
    buildStatus = rejected;
    printf("Status = %d", buildStatus);
}