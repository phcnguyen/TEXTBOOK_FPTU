#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV4
char toUpperCaseV4 (char character);
int main()
{
    char ch;
    printf("\nNhap ch nha:");
    scanf("%c",&ch);
    fflush(stdin);
    ch =toUpperCaseV4(ch);
    printf("\nCh = %c",ch);
    return 0;
}
char toUpperCaseV4 (char character){
     if ( character >= 97 && character <= 122){
        character -= 32;
    }
 }
