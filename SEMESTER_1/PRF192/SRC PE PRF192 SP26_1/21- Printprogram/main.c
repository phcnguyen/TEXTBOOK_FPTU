#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ép người dùng nhập số nguyên
    // c1 break - isPrime dùng khi nào cũng không ảnh hưởng tới kq
    // return là kết thuccs chuongw trình luôn

    int number;
    char buffer;
    while( 1==1 ){
        do {
            printf ("\nNhap number: ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if ( buffer != 10){
                printf("\Nhap lai di pe: ");
            }
        }while ( buffer != 10);
           if ( number == 0){
            return;
        }
        if ( number >= 2){
            int isPrime = 1;
            for ( int i =2 ; i <= number -1 ; i++){
                if ( number % i ==0){
                    isPrime = 0;
                    printf ("\n%d khong phai la so nguyen to", number);
                    break;
                }
            }
            if( isPrime ==1){
                printf("\n%d la so nguyen to",number);
            }
        }
        }
    return 0;

}
