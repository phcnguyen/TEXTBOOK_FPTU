#include <stdio.h>
#include <stdlib.h>
//12-checkPrimeV2

int main()
{
    int isPrime = 1;// 1 = True | 0 = False
    int number;
    printf("\nNhap number : ");
    scanf("%d", &number);
    if ( number >= 2){
        for( int i = 2; i <= number -1 ; i ++){
            if ( number % i == 0){
                    isPrime = 0;
                    //break : dừng vòng lặp for
            }
        }
        if (isPrime == 1){
            printf("\n%d is prime", number);
        }else{
            printf("\n%d is not prime", number);
        }
    }else{
        printf("\n%d is not prime", number);
    }
    return 0;
}
