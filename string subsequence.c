#include <stdio.h>

int isSubsequence(char* s, char* t) {
    while (*t != '\0') {
        if (*s == *t) {
            s++;
        }
        t++;
    }

    return (*s == '\0') ? 1 : 0;
}

int main() {
    char s[100], t[100];
    scanf("%s", t);
    scanf("%s", s);

    int result = isSubsequence(s, t);

    printf("%d\n", result);

    return 0;
}
