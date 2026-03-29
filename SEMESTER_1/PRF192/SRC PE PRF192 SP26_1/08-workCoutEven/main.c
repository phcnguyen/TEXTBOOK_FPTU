#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start , end;
    printf("\nNhap Start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
     if ( start > end){
        int tmp = start;
        start = end;
        end= tmp;

     }
    // 2. tính tong cac so chan trong khoảng
    int sumEven = 0;
    for (int i = start; i <= end ; i++){
        if (i % 2 == 0 ){
                sumEven += i;
        }
    }

      printf ("\nsumEven = %d",sumEven);
// đếm xem có bao nhiêu số trong khoảng
    int count = 0;
    for (int i = start; i <= end ; i++){
        count ++;
    }
    printf("\ncount = %d", count);
    // đếm xem có bao nhiêu số lẻ trong khoảng
     int countOdd = 0;
    for (int i = start; i <= end ; i++){
            if (i % 2 != 0){
                 countOdd ++;
            }
    }
    printf("\ncountOdd = %d", countOdd);

    return 0;
}
