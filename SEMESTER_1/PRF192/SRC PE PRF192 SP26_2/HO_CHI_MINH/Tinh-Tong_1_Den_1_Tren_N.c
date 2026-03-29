#include <stdio.h>

/*
 * Nhập số nguyên dương n, tính tổng S = 1 + 1/2 + 1/3 + ... + 1/n rồi in ra với 2 chữ số thập phân.
 */
int main()
{
    int n;
    int i;
    float S = 0;

    // Nhập số nguyên dương n từ bàn phím
    scanf("%d", &n);

    // Tính tổng S = 1 + 1/2 + 1/3 + ... + 1/n
    for (i = 1; i <= n; i++)
    {
        S = S + 1.0 / i;
    }

    // In tổng S với 2 chữ số thập phân
    printf("%.2f", S);

    return 0;
}