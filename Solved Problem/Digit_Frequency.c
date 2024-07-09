#include <stdio.h>

int main() {
    char s[100];
    int a[10] = {0};
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int val = s[i] - '0';
            a[val]++;
        }
    }

    for (int i = 0; i <= 9; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}