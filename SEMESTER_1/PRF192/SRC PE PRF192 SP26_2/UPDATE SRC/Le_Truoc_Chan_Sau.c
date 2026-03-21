#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[100];
    int i;
    int j;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((a[i] % 2 == 0 && a[j] % 2 != 0) ||
                (a[i] % 2 == a[j] % 2 && a[i] < a[j])) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}


