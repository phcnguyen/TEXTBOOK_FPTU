#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV1
//UpperCase
void toUpperCaseV1 (void);
int main()
{
   toUpperCaseV1 ();
    return 0;
}
void toUpperCaseV1 (void){
    //input
    char ch;
    printf("\nNhap ch nha:");
    scanf("%c",&ch);
    fflush(stdin);
    //process
    if ( ch >= 97 && ch <= 122){
        ch -= 32;
    }
    //output
    printf("\nCh = %c",ch);
}
