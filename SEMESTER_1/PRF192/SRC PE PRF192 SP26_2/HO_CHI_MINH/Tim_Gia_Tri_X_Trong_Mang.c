#include <stdio.h>

/*
 * Nhập vào một mảng số nguyên n phần tử, nhập số x.
 * Tìm và in ra tất cả chỉ số (vị trí) trong mảng mà giá trị bằng x.
 * Nếu không tìm thấy x trong mảng, in ra giá trị của phần tử cuối cùng.
 */
int main()
{
    int n;
    int a[100];
    int x;
    int i;
    int found = 0;

    // Nhập số lượng phần tử của mảng
    scanf("%d", &n);

    // Nhập các phần tử cho mảng a
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Nhập giá trị cần tìm kiếm trong mảng
    scanf("%d", &x);

    // Duyệt các phần tử của mảng và kiểm tra xem có phần tử nào bằng x hay không
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            // Nếu tìm thấy x, in ra chỉ số và đánh dấu đã tìm được
            printf("%d ", i);
            found = 1;
        }
    }

    // Nếu không tìm thấy x trong mảng, in ra giá trị phần tử cuối cùng
    if (found == 0)
    {
        printf("%d", a[n - 1]);
    }

    return 0;
}