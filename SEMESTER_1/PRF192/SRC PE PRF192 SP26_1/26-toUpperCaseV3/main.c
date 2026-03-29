#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV3
char toUpperCaseV3 ( void);

int main()
{
    char character = toUpperCaseV3 ();
    printf("\nCh = %c",character);
    return 0;
}
char toUpperCaseV3 (void){
    char ch;
    printf("\nNhap ch nha:");
    scanf("%c",&ch);
    fflush(stdin);
    if ( ch >= 97 && ch <= 122){
        ch -= 32;
    }
}
