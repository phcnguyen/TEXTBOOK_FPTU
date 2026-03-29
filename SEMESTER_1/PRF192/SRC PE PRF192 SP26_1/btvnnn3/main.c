#include <stdio.h>
#include <stdlib.h>
int sumAll (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    fflush(stdin);
    int sum = sumAll (n);
    printf ("\nTong ne: %d",sum);
    return 0;
}
int sumAll (int n){
    int sum = 0;
    for ( int i = 1; i<=n ; i++){
        if ( i % 2 == 0){
             sum = sum + i;
        }
    }
    return sum;
}
