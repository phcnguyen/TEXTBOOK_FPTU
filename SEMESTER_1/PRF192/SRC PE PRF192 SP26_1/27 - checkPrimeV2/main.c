#include <stdio.h>
#include <stdlib.h>
// checkPrimeV2
int main()
{
    int number;
    printf("\nNhap number : ");
    scanf("%d", &number);
    checkPrimeV2 (number);
    return 0;
}
void checkPrimeV2 (int number){
 if ( number >= 2){
        int isPrime =1;
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

}
