#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Nhập vào một chuỗi s và một ký tự c. 
 * Đổi ký tự c trong s thành chữ in hoa nếu xuất hiện và in ra chuỗi đã đổi. 
 * Nếu không tìm thấy c trong s, in thông báo không tìm thấy.
 */
int main()
{
    char s[200];
    char c;
    int i;
    int found = 0;

    // Nhập một chuỗi ký tự bất kỳ (có thể chứa dấu cách)
    fgets(s, sizeof(s), stdin);

    // Nhập ký tự c cần tìm và đổi thành in hoa (nhấn Enter sau chuỗi ở trên, rồi nhập ký tự, rồi Enter)
    scanf("%c", &c);

    // Duyệt từng ký tự trong chuỗi s
    for (i = 0; s[i] != '\0'; i++)
    {
        // Nếu ký tự tại vị trí i là ký tự cần tìm
        if (s[i] == c)
        {
            s[i] = toupper(s[i]); // Đổi ký tự này thành in hoa
            found = 1; // Đánh dấu đã tìm thấy ký tự
        }
    }

    if (found)
    {
        // Nếu tìm thấy ký tự c, in ra chuỗi sau khi đã xử lý
        printf("%s", s);
    }
    else
    {
        // Nếu không tìm thấy, in ra thông báo
        printf("Character '%c' not found", c);
    }

    return 0;
}