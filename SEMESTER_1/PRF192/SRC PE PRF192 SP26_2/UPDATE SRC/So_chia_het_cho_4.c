#include <stdio.h>

int main()
{
    int a, b, c;
    int count = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a % 4 == 0) count++;
    if (b % 4 == 0) count++;
    if (c % 4 == 0) count++;

    printf("%d", count);

    return 0;
}

