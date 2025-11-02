#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values: a = %d, b = %d\n", a, b);
    //Using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using temp variable): a = %d, b = %d\n", a, b);
    printf("\nResetting to original values...\n");
    temp = a;
    a = b;
    b = temp; 
    //Using arithmetic operators
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (using arithmetic): a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    //Using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping (using bitwise XOR): a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    //Using pointers
    int *p1 = &a;
    int *p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping (using pointers): a = %d, b = %d\n", a, b);
    return 0;
}
