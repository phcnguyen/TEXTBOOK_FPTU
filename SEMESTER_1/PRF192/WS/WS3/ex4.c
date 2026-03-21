#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int i;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
