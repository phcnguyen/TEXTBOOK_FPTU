#include <stdio.h>
#include <string.h>

int main() {
    char s[200], c;
    fgets(s, sizeof(s), stdin);
    if (s[strlen(s) - 1] == '\n') s[strlen(s) - 1] = '\0';
    scanf("%c", &c);
    int i;
    int found = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            s[i] -= 32;
            found = 1;
        }
    }

    if (found)
        printf("%s", s);
    else
        printf("Character '%c' not found", c);

    return 0;
}


