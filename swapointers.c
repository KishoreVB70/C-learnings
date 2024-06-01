#include <stdio.h>
int swap(int* a, int* b);


int main() {
    int a = 10;
    int b = 20;
    printf("Address of a before swap: %p\n", &a);
    printf("Address of b before swap: %p\n", &b);
    printf("Value of a before swap: %d\n", a); 
    printf("Value of b before swap: %d\n", b); 

    swap(&a, &b);

    printf("Value of a after swap: %d\n", a); 
    printf("Value of b after swap: %d\n", b); 
    printf("Address of a after swap: %p\n", &a); 
    printf("Address of b after swap: %p\n", &b); 
    
}

int swap(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
    printf("Value of a inside swap: %p\n", a); 
    printf("Value of b inside swap: %p\n", b); 
}