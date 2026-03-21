#include <stdio.h>

int main()
{
    int a, b;
    int i;

    printf("Input a and b: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
