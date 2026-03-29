#include <stdio.h>

/*
 * Nhập vào nhiệt độ theo độ C, chuyển sang độ F và in kết quả ra màn hình.
 */
int main()
{
    float C;
    float F;

    // Nhập giá trị nhiệt độ theo độ C từ bàn phím
    scanf("%f", &C);

    // Chuyển đổi từ độ C sang độ F theo công thức: F = C * 9 / 5 + 32
    F = C * 9 / 5 + 32;

    // In ra nhiệt độ theo độ F với 2 chữ số thập phân
    printf("%.2f", F);

    return 0;
}