#include <stdio.h>

int main() {
    int n, search, i, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%d is not present in the array.\n", search);
    }
    return 0;
}
