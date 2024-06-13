#include <stdio.h>

#include <stdlib.h>


enum status {
  resolved,
  rejected  
}buildStatus;

int main() {
    buildStatus = resolved;
    printf("Status = %d\n", buildStatus);
    buildStatus = rejected;
    printf("Status = %d", buildStatus);
}