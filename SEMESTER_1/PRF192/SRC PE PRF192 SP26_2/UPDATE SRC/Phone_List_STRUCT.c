#include <stdio.h>

struct Phone {
    char model[100];
    int year;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Phone a[50];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].model, 100, stdin);
        a[i].model[strlen(a[i].model)-1]='\0';
        scanf("%d", &a[i].year);
    }

    for (int i = 0; i < n; i++)
        if (a[i].year >= 2020)
            printf("%s\n", a[i].model);

    return 0;
}

