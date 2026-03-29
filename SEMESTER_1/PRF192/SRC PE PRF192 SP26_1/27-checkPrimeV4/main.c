#include <stdio.h>
#include <stdlib.h>
int checkPrimeV4 (int number);
int main()
{
    int number;
    printf("\nNhap number: ");
    scanf("%d",&number);
    if(checkPrimeV4(number)){
        printf("\n%d is prime");
    }else{
        printf("\n%d is not prime");
    }
    return 0;
}
int checkPrimeV4 (int number){
   if ( number >= 2){
        for ( int i = 2; i <= number -1 ; i++){
            if ( number % i == 0){
                return 0;
            }
       }
       return number >= 2;

}
}
