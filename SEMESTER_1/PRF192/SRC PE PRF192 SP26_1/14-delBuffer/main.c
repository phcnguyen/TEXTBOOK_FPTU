#include <stdio.h>
#include <stdlib.h>
//14-delBuffer
int main()
{
    int age;
    char firstCharOfName;
    printf ("\nNhap age: ");
    scanf("%d",&age);
    fflush(stdin);// dọn buffer trước khi gặp %c
    printf ("\nNhap firstCharOfName: ");
    scanf("%c",&firstCharOfName);

     printf("\nAge ne %d", age);
     printf("\nfirstCharOfName ne %c",firstCharOfName);
    return 0;
}
