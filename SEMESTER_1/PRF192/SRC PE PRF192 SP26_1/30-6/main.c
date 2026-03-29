#include <stdio.h>
#include <stdlib.h>
int sumEven (int n);
int main()
{
    printf("\nSum ne %d",sumEven(5));
    return 0;
}
int sumEven (int n){
    int sum = 0;
    for ( int i =1 ; i <= n;i++){
        if ( i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
