#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int x;
    int i;
    int found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("%d", a[n - 1]);
    }

    return 0;
}

