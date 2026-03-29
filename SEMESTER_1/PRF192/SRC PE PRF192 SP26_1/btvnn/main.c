#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;
    for(;;){
    do {
        printf("\nNhap number: ");
        scanf("%d",&number);
        scanf("%c",&buffer);
        fflush(stdin);
        if ( buffer != 10){
            printf("\Nhap lai di :");
        }
        }while( buffer != 10);
    if ( number == 0){
            return;
        }
    if ( number >= 2){
        int isPrime =1;
        for ( int i = 2;i <= number -1; i++){
            if ( number % i ==0){
                isPrime = 0;
                printf ("\n%d  khong la so nguyen to",number);
                break;
            }
            }if ( isPrime ==1){
                     printf("\n%d la so nguyen to",number);
        }
        }
   }

    return 0;
}
