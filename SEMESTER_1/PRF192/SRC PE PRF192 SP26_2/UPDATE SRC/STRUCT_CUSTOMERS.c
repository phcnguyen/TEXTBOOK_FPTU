#include <stdio.h>

struct Customer {
    char name[100];
    float amount;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Customer a[50];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].amount);
        sum += a[i].amount;
    }

    printf("%.2f", sum);
    return 0;
}

