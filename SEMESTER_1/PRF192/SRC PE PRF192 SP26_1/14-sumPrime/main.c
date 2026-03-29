#include <stdio.h>
#include <stdlib.h>
//nhập ào 2 biến số nguyên start và end
//tính tổng các số nguyên tố trong khoảng
int main()
{
    int start , end;
    int sum = 0;
    printf("\nNhap start: ");
    scanf("%d",&start);
    printf("\nNhap end: ");
    scanf("%d",&end);

    if ( start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for ( int i = start; i <= end; i ++){
        int isPrime = 1;
        if ( i >=2){
            for ( int j = 2; j <= i -1; j++){
                if ( i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if ( isPrime == 1){
                sum += i;
            }
        }
    }
    printf("\nTong ne %d",sum);
    return 0;
}
