#include <stdio.h>
#include <stdlib.h>
//20-printFormat
// nhập vào 1 ký tự thuộc alphabet
// in ra kí tự dưới dạng sô, ký tự, octal

int main()
{
    char ch;
    do{
        printf("\nNhap ky tu di : ");
        scanf("%c",&ch);
        fflush(stdin);
        if (ch < 'a'|| ch > 'z'){
            printf("\nNhap alphabt ma");
        }
    }while( ch < 'a' || ch > 'z');
    printf("\n%d  %c  %o",ch,ch,ch);//%o = octal
    return 0;
}
