#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   printf("\nNhap number: ");
   scanf("%d",&number);
   if ( number >= 2){
    int isPrime = 1;
    for ( int i = 2; i <= number -1 ; i++){
            if ( number % i == 0){
                isPrime = 0;
                break;
   }
   }
   if(isPrime == 1){
        printf ("\n%d la so nguyen to",number);
    }else {
         printf("\n %d khong phai la so nguyen to ",number);
    }
   }else{
        printf("\n %d khong phai so nguyen to", number);
      }

    return 0;
}
