#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[] = "abba";

    if (isPalindrome(str))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
