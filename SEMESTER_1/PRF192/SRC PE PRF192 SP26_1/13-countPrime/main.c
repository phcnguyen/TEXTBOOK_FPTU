#include <stdio.h>
#include <stdlib.h>
//13-countPrime

//nhập vào 2 biế start và end đếm số nguyên tố trong khoảng
//vd ct
// start = -2
// end = 6
// -2 -1 0 1 2 3 4 5 6
//
int main()
{
   int start, end;
   printf("\nNhap start:");
   scanf("%d",&start);
   printf("\nNhap end:");
   scanf("%d",&end);

   if ( start > end){
    int tmp = start;
    start = end;
    end = tmp;
   }
   //int isPrime = 1;
   int countPrime = 0;
   for( int number = start; number <= end; number ++){
      int isPrime =1;
      if ( number >= 2){
             for ( int i = 2; i <= number -1; i++){
                if  ( number % i == 0){
                      isPrime = 0;
                }
             }
             if (isPrime == 1){
                printf("%5d",number);
                countPrime ++;
      }
   }
   if (countPrime == 0){
    printf("\nkhong co so nguyen to trong khoang");
   }else{
       printf("\ncountPrime = %d",countPrime);
   }
    return 0;
}
}
