#include <stdio.h>

int main()
{
    char s[200];
    int i;
    int count = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}


