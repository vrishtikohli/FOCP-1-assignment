#include <stdio.h>
int main() {
    int arr[100], n, i, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Choose insertion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            pos = 0;
            break;
        case 2:
            pos = n / 2;
            break;
        case 3:
            pos = n;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
