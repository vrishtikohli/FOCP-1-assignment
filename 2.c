//Using iterative logic
#include <stdio.h>
int main() {
    int a, b, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0) {
        printf("HCF is %d\n", a + b);
        return 0;
    }
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    hcf = a;
    printf("HCF = %d\n", hcf);
    return 0;
}
