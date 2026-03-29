#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum = 0;
   int start, end;
   printf("\nNhap start: ");
   scanf("%d",&start);
   printf("\nNhap end: ");
   scanf("%d",&end);
   if (start > end){
    int tmp = start;
    start = end;
    end = tmp;
   }
   for ( int number = start; number <= end;number++){
        int isPrime =1;
       if ( number >= 2){
          for (int i =2; i <= number -1;i++){
            if (number % i == 0){
                isPrime = 0;
                break;
            }
          }
          if ( isPrime == 1){
            sum = sum + number;
          }
          }
   }
   printf("\Tong ne: %d ",sum);
    return 0;
}

