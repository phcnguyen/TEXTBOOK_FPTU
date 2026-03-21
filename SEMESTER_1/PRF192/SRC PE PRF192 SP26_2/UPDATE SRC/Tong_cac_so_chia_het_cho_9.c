#include <stdio.h>

int main()
{
    int start, end;
    int sum = 0;
    int i;

    scanf("%d", &start);
    scanf("%d", &end);

    for (i = start + 1; i <= end - 1; i++)
    {
        if (i % 9 == 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}

