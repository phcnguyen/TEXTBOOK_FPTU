#include <stdio.h>

int main()
{
    float C;
    float F;

    scanf("%f", &C);

    F = C * 9 / 5 + 32;

    printf("%.2f", F);

    return 0;
}

