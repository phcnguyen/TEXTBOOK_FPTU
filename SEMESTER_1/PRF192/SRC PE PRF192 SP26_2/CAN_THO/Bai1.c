#include <stdio.h>

int main()
{
    char t;
    int d;
    double total = 0;

    scanf(" %c %d", &t, &d);

    if (t == 'E')
    {
        total = 3;
    }
    else if (t == 'L')
    {
        total = 6;
    }

    if (d <= 5)
    {
        total += d * 1.5;
    }
    else if (d <= 10)
    {
        total += 5 * 1.5 + (d - 5) * 1.25;
    }
    else
    {
        total += 5 * 1.5 + 5 * 1.25 + (d - 10) * 1.0;
    }

    printf("%.2lf", total);

    return 0;
}

