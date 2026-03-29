#include <stdio.h>
#include <stdlib.h>
//25-upperCase
//nhập vào 1 kí tự
// nếu ký tự đó la chữ thương hãy viết hoa
// dù ký tự là gì cũng in ra màn hình
int main()
{
    char ch;
    printf("\nNhap ch nha:");
    scanf("%c",&ch);
    fflush(stdin);
    if ( ch >= 97 && ch <= 122){
        ch -= 32;
    }
    printf("\nCh = %c",ch);
    return 0;
}
