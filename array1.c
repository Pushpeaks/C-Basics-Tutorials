#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, search, found = 0, id = -1;
    int sum = 0;
    float average;

    printf("Enter the total number of elements you want in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of elements must be greater than 0.\n");
        return 0;
    }

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nPRINTING THE CONTENT OF THE ARRAY\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nPRINTING THE SUM OF THE ELEMENTS IN THE ARRAY\n");
    printf("Sum: %d\n", sum);

    average = (float)sum / n;

    printf("\nPRINTING THE AVERAGE OF THE ELEMENTS IN THE ARRAY\n");
    printf("Average: %.2f\n", average);

    printf("\nPRINTING THE EVEN ELEMENTS IN THE ARRAY\n");

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\nPRINTING THE ODD ELEMENTS IN THE ARRAY\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\nPRINTING THE REVERSED ARRAY\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the element you want to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            id = i;
            break;
        }
    }

    if (found == 1) {
        printf("Element found at index %d\n", id);
    } else {
        printf("Element not found\n");
    }
    return 0;
}