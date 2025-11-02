#include <stdio.h>
int main() {
    int n, i, j, count = 0, isPrime;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] <= 1)
            continue;
        isPrime = 1;
        for (j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            count++;
    }
    printf("Total number of prime numbers in the array: %d\n", count);
    return 0;
}
