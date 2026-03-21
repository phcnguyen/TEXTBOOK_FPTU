#include <stdio.h>

int main()
{
    int a, b;
    int result = 1;
    int i;

    printf("Input a and b: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= b; i++)
    {
        result = result * a;
    }

    printf("%d", result);

    return 0;
}
