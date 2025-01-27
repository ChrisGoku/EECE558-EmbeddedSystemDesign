#include <stdio.h> 
#include <stdlib.h> // For abs()


void update(int *a,int *b) {
    int sum = *a + *b;
    *a = sum;
}

int main() { 
    int a, b;
    int *pa = &a, *pb = &b;


    printf("a: %d\n", a);   
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0; 
} 