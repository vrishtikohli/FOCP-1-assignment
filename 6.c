#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    long binary, tempBinary;
    int decimal = 0, remainder, base = 1;
    int digit;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%ld", &binary);
        tempBinary = binary;
        decimal = 0;
        base = 1;
        while (binary > 0) {
            remainder = binary % 10;
            decimal = decimal + remainder * base;
            binary = binary / 10;
            base = base * 2;
        }
        printf("Decimal equivalent of %ld is %d\n", tempBinary, decimal);
    }
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        int binaryNum[32];
        int i = 0;
        while (decimal > 0) {
            binaryNum[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }
        printf("Binary equivalent is: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binaryNum[j]);
        printf("\n");
    }
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }
    return 0;
}
