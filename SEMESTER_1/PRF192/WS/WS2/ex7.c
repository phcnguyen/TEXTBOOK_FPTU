#include <stdio.h>

int main()
{
    int a, b, c, max;

    a = 4;
    b = 7;
    c = 3;

    max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("The largest number is: %d", max);

    return 0;
}
