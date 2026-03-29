#include <stdio.h>
#include <stdlib.h>
//08- evencount
// nhập vào 2 biến số nguyên lần lượt là start và end
// liệt kê tất cả số trong khoảng từ start đến end
//vd
// nhập start : 2
// nhập end : 6
// 2 3 4 5 6
int main()
{
    int start, end;
    printf ("\nNhap start: ");
    scanf("%d",&start);
    printf ("\nNhap end: ");
    scanf("%d",&end);
    // in ra các số chẳn trong hàng đó đi
    //in ra tổng của các sô trong khoảng
    int sum = 0;
    for ( int i = start; i <= end; i++){
        sum +=i;
        {
        printf("\nsum ne = %d",i);
        }
    }
       return 0;
}
