#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    b = ~b;        
    b = b + 1;
    int carry;
    while (b != 0) {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    printf("Result = %d\n", a);
    return 0;
}

