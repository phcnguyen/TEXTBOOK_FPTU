#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV2
void toUpperCaseV2(char character);

int main()
{
    char ch;
    printf("\nNhap ch nha:");
    scanf("%c",&ch);
    fflush(stdin);
    toUpperCaseV2 (ch);// argument ( đối số)
    return 0;
}
void toUpperCaseV2 (char character){ //parameter ( tham số )
    //process
    if ( character >= 97 && character <= 122){
        character -= 32;
    }
    //output
    printf("\nCh = %c",character);
}
