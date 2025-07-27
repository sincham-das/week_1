#include <stdio.h>
#include <string.h>

char *reverseString(char *s) {
    int n = strlen(s);
    char *res = (char *)malloc((n + 1) * sizeof(char));

    int j = 0;
    
    
    for (int i = n - 1; i >= 0; i--) {
        res[j] = s[i];
        j++;
    }

    
    res[n] = '\0';
    return res;
}

int main() {
    char s[] = "abdcfe";
    char *res = reverseString(s);
    printf("%s", res);
    return 0;
}