#include <stdio.h> 

int main() { 
    int x = 42; 
    int y = 50;
    int *p = &x;  
    int *b = &y; 

    printf("x: %d\n", x);      // Value of x
    printf("*p: %d\n", *p);      
    printf("*b: %d\n", *b);      



    return 0; 
} 