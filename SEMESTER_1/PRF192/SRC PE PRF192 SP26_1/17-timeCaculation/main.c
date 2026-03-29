#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 số nguên dương s
// từ s quy ra h phút giây

int main()
{
    int s = 0, h = 0, m = 0;
    char buffer;
    do {
        printf("\nNhap so giay di: ");
        scanf("%d",&s);
        scanf("%c",&buffer);
        fflush(stdin);
        if ( buffer != 10 || s < 0){
            printf("\Nhap lai di :");
        }
        }while( buffer != 10 || s < 0);

        // đã có s
        // tìm h
        h = s/3600;
        // tính phần dư của s
        s =s%3600;
        m = s/60;// tính phút
        // phần dư còn lại sau khi tính phút
        s = s%60;
        printf("\n%02d:%02d:%02d",h ,m,s);
    return 0;
}
