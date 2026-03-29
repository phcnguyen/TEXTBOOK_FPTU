#include <stdio.h>

/*
 * Nhập vào một chuỗi ký tự, đếm và in ra số lượng chữ cái in HOA (A-Z) trong chuỗi đó.
 */
int main()
{
    char s[200];
    int i;
    int count = 0;

    // Đọc cả một dòng ký tự từ bàn phím vào mảng s
    fgets(s, sizeof(s), stdin);

    // Duyệt qua từng ký tự trong chuỗi cho đến khi gặp ký tự kết thúc '\0'
    for (i = 0; s[i] != '\0'; i++)
    {
        // Nếu ký tự nằm trong khoảng 'A'-'Z' thì là chữ cái in HOA
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }

    // In ra số lượng chữ cái in HOA đã đếm được
    printf("%d", count);

    return 0;
}