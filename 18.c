#include <stdio.h>
int main() {
    int n, i, j, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size!\n");
        return 0;
    }
    int arr[n], freq[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (i = 0; i < n; i++) {
        int countFreq = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                countFreq++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = countFreq;
    }
    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0)
        printf("-1");
    printf("\n");
    return 0;
}
