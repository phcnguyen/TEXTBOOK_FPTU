#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("Input n: ");
    scanf("%d", &n);

    i = n;
    while (i >= -n)
    {
        printf("%d ", i);
        i--;
    }

    return 0;
}
