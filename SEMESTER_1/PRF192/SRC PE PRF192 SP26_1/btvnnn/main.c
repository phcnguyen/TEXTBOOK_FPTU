#include <stdio.h>
#include <stdlib.h>
int Factorial (int n);
int FactorialV2 (int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    fflush(stdin);
    int result = Factorial (n);
    printf("\nKet qua ne: %d",result);
    return 0;
}
/*
int Factorial (int n){
    int result =1;
    for ( int i=1; i <= n;i++){
        result *= i;
    }
    return result;

}
*/
int FactorialV2 (int n){
    if ( n == 1 || n == 0) return 1;
    return n * FactorialV2 ( n -1 );
}
