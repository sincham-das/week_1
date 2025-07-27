#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int count = 0;  // Count of non-zero elements

    // Traverse the array and move non-zero elements to front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[count++] = arr[i];
    }

    // Fill remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    printf("Array after moving zeros to end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
