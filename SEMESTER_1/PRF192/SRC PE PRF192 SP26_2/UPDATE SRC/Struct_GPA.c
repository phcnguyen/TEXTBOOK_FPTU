#include <stdio.h>

struct Student {
    char name[100];
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student a[50];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].gpa);
    }

    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i].gpa < a[j].gpa) {
                struct Student t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    for (int i = 0; i < n; i++)
        printf("%s; %.2f\n", a[i].name, a[i].gpa);

    return 0;
}

