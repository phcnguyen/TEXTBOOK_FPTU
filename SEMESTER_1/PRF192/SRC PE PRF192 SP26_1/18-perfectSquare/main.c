#include <stdio.h>
#include <stdlib.h>
// 18-perfectSquare
// số chính phương
// 1 số được căn 2 thành số nguyên là số chính phương
// nhập vào một số nguyên dương N
// kiểm tra xem nó có phải số chính phương không
// for 0 -> i ^ 2  <= n; i++
int main()
{
    int n;
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
    /*
    for (  int i = 0; i*i<= n; i ++){
        if ( n == i*i){
            printf ("\nSo chinh phuong la: %d",n);
            return;
        }
    }
    printf ("\nKhong phai so chinh phuong ne: %d",n);
    */
    //căn 2 của 9 int = 3
    if ( sqrt (n) == (int)sqrt(n)){
        printf("\n%d la so chinh phuong",n);
    }

    return 0;
}

