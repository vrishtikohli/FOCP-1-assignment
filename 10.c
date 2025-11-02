#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks of %d students:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    printf("\nStudents who scored 99:\n");
    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("Student %d (Index %d)\n", i + 1, i);
            count++;
        }
    }
    if(count > 0)
        printf("\nTotal number of students who scored 99: %d\n", count);
    else
        printf("\nNo student scored 99.\n");
    return 0;
}
