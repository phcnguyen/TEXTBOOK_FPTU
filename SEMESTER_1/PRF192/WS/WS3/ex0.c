#include <stdio.h>

int main()
{
    int kWh;
    int bill;

    printf("Please input the number of kWh used: ");
    scanf("%d", &kWh);

    if (kWh <= 50)
    {
        bill = kWh * 3000;
    }
    else if (kWh <= 100)
    {
        bill = 50 * 3000 + (kWh - 50) * 3500;
    }
    else if (kWh <= 200)
    {
        bill = 50 * 3000 + 50 * 3500 + (kWh - 100) * 4000;
    }
    else
    {
        bill = 50 * 3000 + 50 * 3500 + 100 * 4000 + (kWh - 200) * 4500;
    }

    printf("The electricity bill is: %d VND", bill);

    return 0;
}
