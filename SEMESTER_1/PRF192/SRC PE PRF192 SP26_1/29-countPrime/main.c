#include <stdio.h>
#include <stdlib.h>
//countPrime
// nhap vao start va end
// in ra man hinh cac so nguyen to trong khoảng
// tính tổng các số nguyên tố trong khoảng
// đếm xem có bao nhiêu số nguyên tố trong khoảng
int isPrime (int number);
int main()
{
    int start , end;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);

    if ( start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int count =0,sum =0;
    for ( int i = start; i <= end;i ++){
        if ( isPrime(i)){
            printf("%5d",i);
            count ++;
            sum += i;
        }
    }
    printf("\nSum = %d,count = %d", sum , count);
    return 0;
}
int isPrime (int number){
     for ( int i = 2;i <= number -1; i ++){
        if ( number % i == 0){
            return 0;
        }
     }
    return number >= 2;
}
