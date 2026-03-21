#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0;
    int i;

    printf("Input a and b: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
