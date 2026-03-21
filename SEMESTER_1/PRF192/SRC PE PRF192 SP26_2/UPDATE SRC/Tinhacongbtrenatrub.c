#include <stdio.h>

int main()
{
    float a, b, result;

    scanf("%f", &a);
    scanf("%f", &b);

    if (a - b == 0)
    {
        printf("Invalid operation");
    }
    else
    {
        result = (a + b) / (a - b);
        printf("%.3f", result);
    }

    return 0;
}

