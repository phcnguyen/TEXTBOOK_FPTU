#include <stdio.h>

struct Course {
    char name[100];
    float score;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Course a[50];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        getchar();
        fgets(a[i].name, 100, stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        scanf("%f", &a[i].score);
        sum += a[i].score;
    }

    printf("%.2f", sum / n);
    return 0;
}

