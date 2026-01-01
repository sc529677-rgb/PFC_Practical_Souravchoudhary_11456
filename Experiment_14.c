#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &n); 
    printf("Enter %d integers, one per line:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }
    printf("\nElements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
    return 0;
}
