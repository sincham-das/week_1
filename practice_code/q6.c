#include <stdio.h>
#include <stdbool.h>


bool isSortedHelper(int arr[], int n) {
    
    if (n == 0 || n == 1)
        return true;

    if (arr[n - 1] >= arr[n - 2])
        return isSortedHelper(arr, n - 1);
    else
        return false;
}

bool isSorted(int arr[], int n) {
    return isSortedHelper(arr, n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
