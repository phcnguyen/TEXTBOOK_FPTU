#include <stdio.h>
#include <stdlib.h>
//19-sumAllElementNumber
// nhập vào 1 số nguyên dương n
// tính tổng các đơn vị của n

// vd n = 1234
// result = 10

//vd 32345
//result = 17

// hint
int main()
{
    int n ;
    char buffer;
    do {
        printf("\nNhap so n: ");
        scanf("%d",&n);
        scanf("%c",&buffer);
        fflush(stdin);
        if ( buffer != 10 || n < 0){
            printf("\Nhap lai di :");
        }
    }while( buffer != 10 || n < 0);
    int sum = 0;
    while(n != 0){
    sum += n%10;//n = 1234
    n /= 10;
    }//123
    printf("\nSum = %d",sum);

    return 0;
}
