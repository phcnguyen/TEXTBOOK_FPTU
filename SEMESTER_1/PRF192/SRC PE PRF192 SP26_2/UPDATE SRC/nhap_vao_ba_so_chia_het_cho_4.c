#include <stdio.h>


int main() {
    int start, end, sum = 0;
    scanf("%d%d", &start, &end);
    int i;
    for ( i = start + 1; i < end; i++) {
        if (i % 9 == 0) sum += i;
    }

    printf("%d", sum);
    return 0;
}


