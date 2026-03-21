#include <stdio.h>

struct Employee {
    char name[100];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Employee a[50];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].salary);
    }

    float max = a[0].salary;
    for (int i = 1; i < n; i++)
        if (a[i].salary > max) max = a[i].salary;

    for (int i = 0; i < n; i++)
        if (a[i].salary == max)
            printf("%s; %.2f\n", a[i].name, a[i].salary);

    return 0;
}

