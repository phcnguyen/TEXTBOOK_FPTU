#include <stdio.h>
#include <stdlib.h>
// int checkPrimeV3 (void)
int main()
{
    int isPrime = checkPrimeV3 ();
    if ( isPrime == 1){
        printf("\n%d is prime",isPrime);
    }else {
         printf("\n%d is not prime",isPrime);
    }
    return 0;
}
int checkPrimeV3 (void){
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
            return 1;
        }else {
            return 0;
        }
   }else{
        return 0;
    }
}
