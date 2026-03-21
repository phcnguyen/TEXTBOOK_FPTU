#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    char c;
    int i;
    int found = 0;

    fgets(s, sizeof(s), stdin);
    scanf("%c", &c);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            s[i] = toupper(s[i]);
            found = 1;
        }
    }

    if (found)
    {
        printf("%s", s);
    }
    else
    {
        printf("Character '%c' not found", c);
    }

    return 0;
}

