#include <stdio.h>

int main()
{
    int n;
    int i;
    float S = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        S = S + 1.0 / i;
    }

    printf("%.2f", S);

    return 0;
}

