#include <stdio.h>

struct Product
{
    char id[20];
    char name[50];
    float price;
    char brand[50];
};

int main()
{
    int n, option;
    int i;
    float total = 0;
    float maxPrice;

    scanf("%d", &n);

    struct Product p[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s", p[i].id);
        getchar();
        fgets(p[i].name, 50, stdin);
        scanf("%f", &p[i].price);
        getchar();
        fgets(p[i].brand, 50, stdin);
    }

    scanf("%d", &option);

    if (option == 1)
    {
        for (i = 0; i < n; i++)
        {
            printf("%s; %s; %.2f; %s", p[i].id, p[i].name, p[i].price, p[i].brand);
        }
    }
    else if (option == 2)
    {
        for (i = 0; i < n; i++)
        {
            printf("%s; %s; %.2f; %s", p[i].id, p[i].name, p[i].price, p[i].brand);
            total += p[i].price;
        }
        printf("Total price: %.2f", total);
    }
    else if (option == 3)
    {
        maxPrice = p[0].price;
        for (i = 1; i < n; i++)
        {
            if (p[i].price > maxPrice)
            {
                maxPrice = p[i].price;
            }
        }

        for (i = 0; i < n; i++)
        {
            if (p[i].price == maxPrice)
            {
                printf("%s; %s; %.2f; %s", p[i].id, p[i].name, p[i].price, p[i].brand);
            }
        }
    }
    else
    {
        printf("Invalid option!");
    }

    return 0;
}

