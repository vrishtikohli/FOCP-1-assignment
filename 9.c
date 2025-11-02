#include <stdio.h>
int main() {
    int scores[100], n, i;
    int found = 0; 
    printf("Enter number of scores: ");
    scanf("%d", &n);
    printf("Enter %d scores: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    for(i = 0; i < n; i++) {
        if(scores[i] == 99) {
            printf("First occurrence of score 99 found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Score 99 not found in the list.\n");
    }
    return 0;
}
