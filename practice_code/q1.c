#include <stdio.h>

void insertElement(int arr[], int n, int x, int pos) {
    
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  // Pre-allocated size
    int n = 5;
    int x = 25;
    int pos = 3;

    insertElement(arr, n, x, pos);

    return 0;
}
