#include <stdio.h>

struct Product {
    char id[20];
    char name[100];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Product a[50];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", a[i].id);
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].price);
        sum += a[i].price;
    }

    for (int i = 0; i < n; i++)
        printf("%s; %s; %.2f\n", a[i].id, a[i].name, a[i].price);

    printf("Total: %.2f", sum);
    return 0;
}

