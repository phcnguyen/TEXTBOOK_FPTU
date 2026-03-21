#include <stdio.h>

struct Book {
    char title[100];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Book a[50];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].title, 100, stdin);
        a[i].title[strlen(a[i].title)-1]='\0';
        scanf("%f", &a[i].price);
    }

    float x;
    scanf("%f", &x);

    for (int i = 0; i < n; i++)
        if (a[i].price >= x)
            printf("%s; %.2f\n", a[i].title, a[i].price);

    return 0;
}

