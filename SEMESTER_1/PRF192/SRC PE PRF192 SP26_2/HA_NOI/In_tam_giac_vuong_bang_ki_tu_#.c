#include <stdio.h>

/*
 * Nhập số nguyên dương n, in ra hình tam giác vuông cạnh n gồm ký tự '#' ở viền còn bên trong là dấu cách.
 * Dòng đầu và dòng cuối in toàn '#' còn các dòng giữa in '#' ở hai cạnh và đường chéo, phần còn lại là dấu cách.
 */
int main()
{
    int n;
    int i, j;

    // Nhập số hàng của tam giác
    scanf("%d", &n);

    // Duyệt qua từng dòng của tam giác
    for (i = 1; i <= n; i++)
    {
        // Duyệt qua các cột trong từng dòng
        for (j = 1; j <= i; j++)
        {
            // Nếu ở viền của tam giác: dòng đầu, dòng cuối, cột đầu, hoặc đường chéo (j == i)
            if (i == 1 || i == n || j == 1 || j == i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        // Xuống dòng sau mỗi hàng
        printf("\n");
    }

    return 0;
}