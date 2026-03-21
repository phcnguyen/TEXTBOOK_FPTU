#include <stdio.h>

struct Student {
    char name[100];
    float gpa;
};

int main() {
    int n, count = 0;
    scanf("%d", &n);

    struct Student a[50];
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].gpa);
        if (a[i].gpa >= 5) count++;
    }

    printf("%d", count);
    return 0;
}

