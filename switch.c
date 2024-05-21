#include <stdio.h>

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("you have entered 1");
        break;
    case 2:
        printf("you have entered 2");
        break;
    default:
        printf("idk what you entered");
    }
    
    return 0;
}