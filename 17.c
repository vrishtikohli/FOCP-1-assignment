#include <stdio.h>
int main() {
    int arr[100], n, pos, i; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter position to delete:\n");
    printf("1. Front\n2. Middle (enter index)\n3. End\n");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            pos = 0;
            break;
        case 2:
            printf("Enter index (0 to %d): ", n-1);
            scanf("%d", &pos);
            if(pos < 0 || pos >= n) {
                printf("Invalid index!\n");
                return 0;
            }
            break;
        case 3:
            pos = n - 1;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nArray after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
