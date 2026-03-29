#include <stdio.h>
#include <stdlib.h>
//23- mulEvenOdd
// nhập vào n từ 2 trở lên
// tính tích các só chẵn và các số lẻ từ 1 đến tiệm cận n
int main()
{
    int n;
    char buffer;
    do {
        printf ("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if ( buffer != 10 || n < 2){
            printf("\Nhap lai di pe: ");
        }
    }while ( buffer != 10 || n < 2);
    int p_even = 1,  p_odd = 1;
    int c_even = 0,  c_odd = 0;// c: check
    for( int i =1; i <= n-1;i ++){
        if ( i  % 2 == 0){
            p_even *= i;
            c_even = 1;
        }else{
            p_odd *= i;
            c_odd = 1;
        }
    }
    p_even *= c_even;
    p_odd  *= c_odd;
    printf("\np_even = %d",p_even);
    printf("\np_odd = %d",p_odd);
    return 0;
}
