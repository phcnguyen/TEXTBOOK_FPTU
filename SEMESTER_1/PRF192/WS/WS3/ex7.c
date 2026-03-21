#include <stdio.h>

int main()
{
    int n, x;
    int i;

    int S1 = 0;
    float S2 = 0;
    float S3 = 0;
    int S4 = 0;
    int S5 = 0;
    int power = 1;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Input x: ");
    scanf("%d", &x);

    /* S1 = 2 + 4 + 6 + ... + 2*n */
    for (i = 1; i <= n; i++)
    {
        S1 = S1 + 2 * i;
    }

    /* S2 = 1 + 1/2 + 1/3 + ... + 1/n */
    for (i = 1; i <= n; i++)
    {
        S2 = S2 + 1.0 / i;
    }

    /* S3 = 1/2 + 2/3 + 3/4 + ... + n/(n+1) */
    for (i = 1; i <= n; i++)
    {
        S3 = S3 + (float)i / (i + 1);
    }

    /* S4 = 11 + 22 + 33 + ... + nn */
    for (i = 1; i <= n; i++)
    {
        S4 = S4 + i * 11;
    }

    /* S5 = x + x^2 + x^3 + ... + x^n */
    for (i = 1; i <= n; i++)
    {
        power = power * x;
        S5 = S5 + power;
    }

    printf("S1 = %d\n", S1);
    printf("S2 = %.2f\n", S2);
    printf("S3 = %.2f\n", S3);
    printf("S4 = %d\n", S4);
    printf("S5 = %d\n", S5);

    return 0;
}
